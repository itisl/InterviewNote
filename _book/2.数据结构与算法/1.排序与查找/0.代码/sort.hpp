#ifndef _SORT_HPP_
#define _SORT_HPP_

#include <bits/stdc++.h>
using namespace std;

namespace Sort {

// 冒泡排序
void bubble_sort(vector<int>& vec) {
  int n = vec.size();

  for (int i = 0; i < n; i++) {
    bool flag = false;
    for (int j = n - 1; j > i; j--) {
      if (vec[j] < vec[j - 1]) {
        swap(vec[j], vec[j - 1]);
        flag = true;
      }
    }
    if (flag == false) return;
  }
  return;
}

// 选择排序
void selection_sort(vector<int>& vec) {
  int n = vec.size();

  for (int i = 0; i < n - 1; i++) {  // n-1轮比较
    int min_idx = i;
    for (int j = i + 1; j < n; j++) {
      if (vec[j] < vec[min_idx]) min_idx = j;
    }
    // 优化，减少交换次数
    if (i != min_idx) swap(vec[i], vec[min_idx]);
  }
  return;
}

// 插入排序
void insertion_sort(vector<int>& vec) {
  int n = vec.size();

  for (int i = 1; i < n; i++) {
    // 优化：用赋值代替交换
    int elem = vec[i];
    int j = i;
    // 找到合适的位置就提前终止循环，这是插入排序的重要性质
    for (; j > 0 and elem < vec[j - 1]; j--) {
      vec[j] = vec[j - 1];
    }
    vec[j] = elem;
  }
  return;
}

//希尔排序

//归并排序

void merge(vector<int>& vec, int l, int mid, int r) {
  vector<int> tmp(begin(vec) + l, begin(vec) + r + 1);
  int i = 0, j = mid + 1 - l, k = l;
  while (i <= mid - l and j <= r - l) {
    if (tmp[i] < tmp[j])
      vec[k++] = tmp[i++];
    else
      vec[k++] = tmp[j++];
  }
  if (i <= mid - l) {
    while (i <= mid - l) vec[k++] = tmp[i++];
  }
  if (j <= r - l)
    while (j <= r - l) vec[k++] = tmp[j++];
}
// 对[l,r]的范围排序
void _merge_sort(vector<int>& vec, int l, int r) {
  if (l < r) {
    int mid = l + ((r - l) >> 1);
    _merge_sort(vec, l, mid);
    _merge_sort(vec, mid + 1, r);
    // 优化，当左边序列有比右边序列大的数才执行归并
    if (vec[mid] > vec[mid + 1]) merge(vec, l, mid, r);
  }
}

void merge_sort(vector<int>& vec) {
  int n = vec.size();
  _merge_sort(vec, 0, n - 1);
}

// 自底向上的归并算法
void merge_sort_BU(vector<int>& vec) {
  int n = vec.size();
  for (int sz = 1; sz < n; sz *= 2) {
    for (int i = 0; i + sz - 1 < n; i += 2 * sz) {
      merge(vec, i, i + sz - 1, min(i + 2 * sz - 1, n - 1));
    }
  }
}

// 快速排序

// 划分操作
int partition(vector<int>& vec, int l, int r) {
  // 优化1：随机选择基准
  swap(vec[l], vec[rand() % (r - l + 1) + l]);
  int elem = vec[l];
  int lt = l;
  for (int i = l + 1; i <= r; i++) {
    if (vec[i] < elem) {
      swap(vec[++lt], vec[i]);
    }
  }
  swap(vec[l], vec[lt]);
  return lt;
}

// 优化2：三路快排
int partition_3(vector<int>& vec, int l, int r) {
  // 优化1：随机选择基准
  swap(vec[l], vec[rand() % (r - l + 1) + l]);
  int elem = vec[l];
  // [l+1,lt]<e, [lt+1,i-1]=e, [gt,r]>e
  int lt = l, gt = r + 1;
  for (int i = l + 1; i < gt;) {
    if (vec[i] < elem) {
      swap(vec[++lt], vec[i++]);
    } else if (vec[i] > elem) {
      // gt-1处元素大小未知，交换之后继续处理
      swap(vec[i], vec[--gt]);
    } else {
      i++;
    }
  }
  swap(vec[l], vec[lt]);
  return lt;
}

void _quick_sort(vector<int>& vec, int l, int r) {
  if (l < r) {
    int pivot = partition_3(vec, l, r);
    _quick_sort(vec, l, pivot - 1);
    _quick_sort(vec, pivot + 1, r);
  }
}

void quick_sort(vector<int>& vec) {
  int n = vec.size();
  _quick_sort(vec, 0, n - 1);
}

}  // namespace Sort

#endif  // !_SORT_HPP_