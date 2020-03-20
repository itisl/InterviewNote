#include <random>
#include <iostream>

int main() {

  std::mt19937 gen{std::random_device{}()};
  std::uniform_int_distribution<> dis(1,50);
  for(int n=10;n>0;n--){
    std::cout << dis(gen) <<std::endl;
  }
}


