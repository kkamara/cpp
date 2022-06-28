#include <iostream>

int main(int argc, char **argv) {
  int *pNumber5{ new int }; // memory location contains junk value
  int *pNumber6{ new int (22) }; // use direct initialization
  int *pNumber7{ new int {23} }; // use uniform initialization

  std::cout << std::endl;
  std::cout << "initialize with value memory address at declaration : " << std::endl;
  std::cout << "pNumber5 : " << pNumber5 << std::endl;
  std::cout << "*pNumber5 : " << *pNumber5 << std::endl;

  std::cout << "pNumber6 : " << pNumber6 << std::endl;
  std::cout << "*pNumber6 : " << *pNumber6 << std::endl;

  std::cout << "pNumber7 : " << pNumber7 << std::endl;
  std::cout << "*pNumber7 : " << *pNumber7 << std::endl;

  delete pNumber5;
  delete pNumber6;
  delete pNumber7;

  pNumber5 = nullptr;
  pNumber6 = nullptr;
  pNumber7 = nullptr;

  // can reuse pointers
  pNumber5 = new int(81);
  // *pNumber6 = 81; // Segmentation fault (core dumped)
  std::cout << "*pNumber : " << *pNumber5 << std::endl;
  *pNumber5 = 81;
  std::cout << "*pNumber : " << *pNumber5 << std::endl;

  /*
        invalid
    int number {new int(5)};
    std::cout << "number : " << number << std::endl;
  */

  return 0;
}