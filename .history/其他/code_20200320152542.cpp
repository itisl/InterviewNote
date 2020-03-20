#include <random>
#include <iostream>

int main() {

  std::mt19937 gen{std::random_device{}()};
  std::uniform_int_distribution<> dis(1,5);
  std::uniform_real_distribution<> dis2{1, 5};
  for(int n=10;n>0;n--){
    std::cout << dis2(gen) <<std::endl;
  }
}


