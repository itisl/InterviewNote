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
	int min_idx = 0;
	for(int i=0;i<n;i++){
		
	}

}

// 插入排序

//

}  // namespace Sort

#endif  // !_SORT_HPP_