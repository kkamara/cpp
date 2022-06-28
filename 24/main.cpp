#include <iostream>

int main() {
  std::cout << std::endl;
  std::cout << "Solution 1 : " << std::endl;
  int *pNumber5{};
  int *pNumber6{new int{56}};

  if (pNumber6 != nullptr) {
    std::cout << "*pNumber6 : " << *pNumber6 << std::endl;
  }

  /*
      
      Solution 1 : 
      *pNumber6 : 56
  */

  return 0;
}