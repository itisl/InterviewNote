#include <bits/stdc++.h>

#include "SortHelper.hpp"
using namespace std;

int main() {
  vector<int> a{SortHelper::generate_random_vec(1, 5, 100)};
  // int a[5] {1,2,3,4,5};
  SortHelper::print_array(a);
  return 0;
}