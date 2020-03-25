#include <bits/stdc++.h>

#include "SortHelper.hpp"
#include "sort.hpp"
using namespace std;

int main() {
  vector<int> a{SortHelper::generate_random_vec(1, 50, 50)};
  SortHelper::print_array(a);
  auto a1 = Sort::bubble_sort(a);
  cout << "hr" << endl;
  SortHelper::print_array(a1);
  return 0;
}