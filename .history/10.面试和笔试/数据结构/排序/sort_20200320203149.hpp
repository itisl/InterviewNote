#ifndef _SORT_HPP_
#define _SORT_HPP_

#include <bits/stdc++.h>
using namespace std;

namespace Sort {

// 冒泡排序
vector<int> bubble_sort(const vector<int>& vec) {
  int n = vec.size();
  auto vec_copy = vec;
  for (int i = 0; i < n; i++) {
    bool flag = false;
    for (int j = n - 1; j > i; j--) {
      if (vec_copy[j] < vec_copy[j - 1]) {
        swap(vec_copy[j], vec_copy[j - 1]);
        flag = true;
      }
    }
    if (flag == false) return vec_copy;
  }
  return vec_copy;
}

// 选择排序
vector<int> selection_sort(const vector<int>& vec) {
  int n = vec.size();
  auto vec_copy = vec;
  for (int i = 0; i < n - 1; i++) {  // n-1轮比较
    int min_idx = i;
    for (int j = i + 1; j < n; j++) {
      if (vec_copy[j] < vec_copy[min_idx]) min_idx = j;
    }
		// 优化，减少交换次数
    if (i != min_idx) swap(vec_copy[i], vec_copy[min_idx]);
  }
  return vec_copy;
}

// 插入排序
vector<int> insertion_sort(const vector<int>& vec) {
  int n = vec.size();
  auto vec_copy = vec;
  for (int i = 1; i < n; i++) {
		// 优化：用赋值代替交换
    int elem = vec_copy[i];
    for (int j = i; j > 0 and elem < vec_copy[j-1]; j--) {
        vec_copy[j] = vec_copy[j-1];
    }

  }
}
//

}  // namespace Sort

#endif  // !_SORT_HPP_