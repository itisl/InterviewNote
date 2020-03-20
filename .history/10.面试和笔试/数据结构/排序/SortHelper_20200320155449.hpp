#ifndef _SORT_HELPER_HPP_
#define _SORT_HELPER_HPP_

#include <random>
#include <vector>
#include <iostream>
namespace SortHelper {
std::vector<int> generate_random_vec(int range_l, int range_r, int n) {
  std::vector<int> arr(n);
  std::mt19937 gen(std::random_device{}());
  std::uniform_int_distribution<> dis;
  for(auto &e:arr){
      std::cout << "hr" << std::endl;
      e = dis(gen);
  }
}

}  // namespace SortHelper

#endif  // !_SORT_HELPER_HPP_
