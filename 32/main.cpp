#include <iostream>

int main() {
  double doubleValue {12.34};
  double& refDoubleValue {doubleValue};
  // double* pDoubleValue {&doubleValue};
  double* pDoubleValue {new double{doubleValue}};
  
  std::cout << "doubleValue : " << doubleValue << std::endl;
  std::cout << "refDoubleValue : " << refDoubleValue << std::endl;
  std::cout << "refDoubleValue Address : " << &refDoubleValue << std::endl;
  std::cout << "pDoubleValue : " << pDoubleValue << std::endl;
  std::cout << "*pDoubleValue : " << *pDoubleValue << std::endl;
  
  std::cout << std::endl;
  std::cout << "Writing through pointer : " << std::endl;

  *pDoubleValue = 15.44;

  std::cout << "doubleValue : " << doubleValue << std::endl;
  std::cout << "refDoubleValue : " << refDoubleValue << std::endl;
  std::cout << "refDoubleValue Address : " << &refDoubleValue << std::endl;
  std::cout << "pDoubleValue : " << pDoubleValue << std::endl;
  std::cout << "*pDoubleValue : " << *pDoubleValue << std::endl;

  std::cout << std::endl;
  std::cout << "Writing through reference : " << std::endl;

  refDoubleValue = 18.44;

  std::cout << "doubleValue : " << doubleValue << std::endl;
  std::cout << "refDoubleValue : " << refDoubleValue << std::endl;
  std::cout << "refDoubleValue Address : " << &refDoubleValue << std::endl;
  std::cout << "pDoubleValue : " << pDoubleValue << std::endl;
  std::cout << "*pDoubleValue : " << *pDoubleValue << std::endl;

  std::cout << std::endl;
  std::cout << "Writing pointer from other value : " << std::endl;

  double someOtherDouble {78.45};

  delete pDoubleValue; // not possible when declared with double* pDoubleValue {&doubleValue};
  pDoubleValue = nullptr;

  pDoubleValue = &someOtherDouble;

  std::cout << "doubleValue : " << doubleValue << std::endl;
  std::cout << "refDoubleValue : " << refDoubleValue << std::endl;
  std::cout << "refDoubleValue Address : " << &refDoubleValue << std::endl;
  std::cout << "pDoubleValue : " << pDoubleValue << std::endl;
  std::cout << "*pDoubleValue : " << *pDoubleValue << std::endl;

  /*
        doubleValue : 12.34
        refDoubleValue : 12.34
        refDoubleValue Address : 0x7ffed6065ff0
        pDoubleValue : 0x7ffed6065ff0
        *pDoubleValue : 12.34

        Writing through pointer : 
        doubleValue : 15.44
        refDoubleValue : 15.44
        refDoubleValue Address : 0x7ffed6065ff0
        pDoubleValue : 0x7ffed6065ff0
        *pDoubleValue : 15.44

        Writing through reference : 
        doubleValue : 18.44
        refDoubleValue : 18.44
        refDoubleValue Address : 0x7ffed6065ff0
        pDoubleValue : 0x7ffed6065ff0
        *pDoubleValue : 18.44

        Writing pointer from other value : 
        doubleValue : 18.44
        refDoubleValue : 18.44
        refDoubleValue Address : 0x7ffc438e04a8
        pDoubleValue : 0x7ffc438e04b0
        *pDoubleValue : 78.45
  */

  std::cout << std::endl;
  std::cout << "non const reference : " << std::endl;
  int age {27};
  int& refAge{age};

  std::cout << "age : " << age << std::endl;
  std::cout << "refAge : " << refAge << std::endl;

  std::cout << std::endl;
  std::cout << "modify original variable through reference : " << std::endl;

  refAge++; // modify through reference.

  std::cout << "age : " << age << std::endl;
  std::cout << "refAge : " << refAge << std::endl;

  /*

        *pDoubleValue : 78.45

        non const reference : 
        age : 27
        refAge : 27

        modify original variable through reference : 
        age : 28
        refAge : 28
  */

  return 0;
}