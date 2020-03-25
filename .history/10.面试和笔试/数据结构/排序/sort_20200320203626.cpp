#include "sort.hpp"

#include <bits/stdc++.h>

#include "SortHelper.hpp"
using namespace std;

int main() {
  vector<int> vec{SortHelper::generate_random_vec(1, 100, 50)};
  SortHelper::print_array(vec);

  auto a = Sort::bubble_sort(vec);
  if (is_sorted(begin(a), end(a)))
    cout << "sorted!" << endl;
  else
    cout << "Not sorted!" << endl;
  SortHelper::print_array(a);

  a = Sort::selection_sort(vec);
  if (is_sorted(begin(a), end(a)))
    cout << "sorted!" << endl;
  else
    cout << "Not sorted!" << endl;
  SortHelper::print_array(a);

  a = Sort::selection_sort(vec);
  if (is_sorted(begin(a), end(a)))
    cout << "sorted!" << endl;
  else
    cout << "Not sorted!" << endl;
  SortHelper::print_array(a);
  
  return 0;
}