#ifndef _SORT_HPP_
#define _SORT_HPP_

#include <bits/stdc++.h>
using namespace std;

namespace Sort {

// 冒泡排序
vector<int> bubble_sort(const vector<int>& vec) {
  int n = vec.size();
  auto vec1 = vec;
  for (int i = 0; i < n; i++) {
    bool flag = false;
    for (int j = n - 1; j > i; j--) {
      if (vec1[j] < vec1[j - 1]) {
        swap(vec1[j], vec1[j - 1]);
        flag = true;
      }
    }
    if (flag == false) return vec1;
  }
  return vec1;
}

// 选择排序
vector<int> selection_sort(const vector<int>& vec) {
	int n = vec.size();
  auto vec1 = vec;
	for(int i=0;i<n-1;i++){ // n-1轮比较
		int min_idx = i;
		for(int j=i+1;j<n;j++){
			if(vec1[j] < vec1[min_idx])	min_idx = j;
		}
		if(i != min_idx)
		swap(vec1[i], vec1[min_idx]);
	}
	return vec1;

}

// 插入排序

//

}  // namespace Sort

#endif  // !_SORT_HPP_