#ifndef _SORT_HELPER_HPP_
#define _SORT_HELPER_HPP_

#include <random>
#include <vector>
namespace SortHelper {
std::vector<int> generate_random_vec(int range_l, int range_r, int n) {
  std::vector<int> arr;
  std::mt19937 gen(std::random_device{}());
  std::uniform_int_distribution<> dis;
}

}  // namespace SortHelper

#endif  // !_SORT_HELPER_HPP_
