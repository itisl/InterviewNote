#include <bits/stdc++.h>

#include "SortHelper.hpp"
#include "sort.hpp"
using namespace std;

int main() {
  vector<int> vec{SortHelper::generate_random_vec(1, 100, 50)};
  SortHelper::print_array(vec);
  auto a = Sort::bubble_sort(vec);
  SortHelper::print_array(a);
  a = Sort::selection_sort(vec);
  if(is_sorted(a.begin(), a.end()))
    cout << "sorted!" << endl;
  SortHelper::print_array(a);
  return 0;
}