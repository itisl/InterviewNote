#include "sort.hpp"

#include <bits/stdc++.h>

#include "SortHelper.hpp"
using namespace std;

int main() {
  vector<int> vec{SortHelper::generate_random_vec(1, 3, 20)};
  SortHelper::print_array(vec);

  auto a = vec;
  // Sort::bubble_sort(a);
  // if (is_sorted(begin(a), end(a)))
  //   cout << "sorted!" << endl;
  // else
  //   cout << "Not sorted!" << endl;
  // SortHelper::print_array(a);

  // a = vec;
  // Sort::selection_sort(a);
  // if (is_sorted(begin(a), end(a)))
  //   cout << "sorted!" << endl;
  // else
  //   cout << "Not sorted!" << endl;
  // SortHelper::print_array(a);

  // a = vec;
  // Sort::insertion_sort(a);
  // if (is_sorted(begin(a), end(a)))
  //   cout << "sorted!" << endl;
  // else
  //   cout << "Not sorted!" << endl;
  // SortHelper::print_array(a);

  // a = vec;
  // Sort::merge_sort(a);
  // if (is_sorted(begin(a), end(a)))
  //   cout << "sorted!" << endl;
  // else
  //   cout << "Not sorted!" << endl;
  // SortHelper::print_array(a);


  // Sort::merge_sort_BU(a);
  // if (is_sorted(begin(a), end(a)))
  //   cout << "sorted!" << endl;
  // else
  //   cout << "Not sorted!" << endl;
  // SortHelper::print_array(a);

    Sort::quick_sort(a);
  if (is_sorted(begin(a), end(a)))
    cout << "sorted!" << endl;
  else
    cout << "Not sorted!" << endl;
  SortHelper::print_array(a);

  return 0;
}