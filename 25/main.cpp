#include <iostream>

int main() {
  std::cout << std::endl;
  std::cout << "Solution 2 : " << std::endl;
  int *pNumber7{new int{82}};

  std::cout << "pNumber7 - " << pNumber7 << " - " << *pNumber7 << std::endl;

  delete pNumber7;
  pNumber7 = nullptr;

  if (pNumber7 != nullptr) {
    std::cout << "*pNumber7 : " << *pNumber7 << std::endl;
  }

  /*

      Solution 2 : 
      pNumber7 - 0x559eb3a992c0 - 82
  */

  // Case 2 : delete pointer
  std::cout << std::endl;
  std::cout << "Case 2 : deleted pointer" << std::endl;
  int * pNumber1 {new int{67}};

  std::cout << "*pNumber1 (before delete) : " << *pNumber1 << std::endl;

  delete pNumber1;

  std::cout << "*pNumber1(after delete) : " << *pNumber1 << std::endl;

  /*
      *pNumber1 (before delete) : 67
      *pNumber1(after delete) : 1652134673
  */

  return 0;
}