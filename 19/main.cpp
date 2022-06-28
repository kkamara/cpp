#include <iostream>

int main() {
  /* don't do */

  int *pNumber2;
  *pNumber2 = 55;
  std::cout << std::endl;
  std::cout << "Writing into uninitialized pointer through dereference" << std::endl;
  std::cout << "pNumber2 : " << pNumber2 << std::endl;
  std::cout << "*pNumber2 : " << *pNumber2 << std::endl;

  int *pNumber3 {};

  std::cout << std::endl;
  std::cout << "Reading and writing through nullptr : " << std::endl;

  /*
      
      Writing into uninitialized pointer through dereference
      pNumber2 : 0x7fd55bd00940
      *pNumber2 : 55

      Reading and writing through nullptr : 
      Segmentation fault (core dumped)
  */

  return 0;
}