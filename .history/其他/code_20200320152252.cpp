#include <random>
#include <iostream>

int main() {

  std::mt19937 gen{std::random_device{}()};
  std::dist
  for(int n=10;n>0;n--){
    std::cout << gen() <<std::endl;
  }
}


