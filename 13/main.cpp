#include <iostream>

int main() {
  std::cout << std::endl;
  std::cout << "Declare and initialize at the same time : " << std::endl;

  double salaries[5] {12.7, 7.5, 13.2, 8.1, 9.3};


  for(uint8_t i{0}; i < std::size(salaries); ++i) {
    std::cout << "salary[" << i << "] : " << salaries[i] << std::endl;
  }

  int classSizes[] {10,12,15,11,18,17};

  for(auto value : classSizes) {
    std::cout << "value : " << value << std::endl;
    std::cout << "sizeof(value) : " << sizeof(value) << std::endl;
  }

  int scores [] {1,2,3,4,5,6,7,8,9,10,11,12};
  int count { std::size(scores) };

  for (size_t i {}; i < count; ++i) {
    std::cout << "scores [" << i << "] : " << scores[i] << std::endl;
  }

  return 0;
}