#include <iostream>

int main() {
  int number{22};
  int * pNumber = &number;

  std::cout << std::endl;
  std::cout << "Declaring pointer and assigning address : " << std::endl;
  std::cout << "number : " << number << std::endl;
  std::cout << "pNumber : " << pNumber << std::endl;
  std::cout << "&number : " << &number << std::endl;
  std::cout << "*pNumber : " << std::endl;

  int * pNumber1;
  int number1{12};
  pNumber1 = &number1;
  std::cout << std::endl;
  std::cout << "uninitialized pointer : " << std::endl;
  std::cout << "*pNumber1 : " << *pNumber1 << std::endl;

  /*
      
      Declaring pointer and assigning address : 
      number : 22
      pNumber : 0x7ffc3ed53c60
      &number : 0x7ffc3ed53c60
      *pNumber : 

      uninitialized pointer : 
      *pNumber1 : 12
  */

  return 0;
}