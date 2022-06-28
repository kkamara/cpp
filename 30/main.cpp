#include <iostream>

int main() {
  /* references */

  int intValue {45};
  double doubleValue{33.65};

  int& referenceToIntValue1{intValue};
  int& referenceToIntValue2 = intValue;
  double& referenceToDoubleValue1{doubleValue};

  // int& someReference; // error

  std::cout << "intValue : " << intValue << std::endl;
  std::cout << "doubleValue : " << doubleValue << std::endl;
  std::cout << "referenceToIntValue1 : " << referenceToIntValue1 << std::endl;
  std::cout << "referenceToIntValue2 : " << referenceToIntValue2 << std::endl;
  std::cout << "referenceToDoubleValue1 : " << referenceToDoubleValue1 << std::endl;
  std::cout << "&intValue : " << &intValue << std::endl;
  std::cout << "&doubleValue : " << &doubleValue << std::endl;
  std::cout << "&referenceToIntValue1 : " << &referenceToIntValue1 << std::endl;
  std::cout << "&referenceToIntValue2 : " << &referenceToIntValue2 << std::endl;
  std::cout << "&referenceToDoubleValue1 : " << &referenceToDoubleValue1 << std::endl;
  std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
  std::cout << "sizeof(int&) : " << sizeof(int&) << std::endl;
  std::cout << "sizeof(referenceToIntValue1) : " << sizeof(referenceToIntValue1) << std::endl;

  std::cout << "----" << std::endl;

  referenceToIntValue1 = 55;

  std::cout << "intValue : " << intValue << std::endl;
  std::cout << "doubleValue : " << doubleValue << std::endl;
  std::cout << "referenceToIntValue1 : " << referenceToIntValue1 << std::endl;
  std::cout << "referenceToIntValue2 : " << referenceToIntValue2 << std::endl;
  std::cout << "referenceToDoubleValue1 : " << referenceToDoubleValue1 << std::endl;
  std::cout << "&intValue : " << &intValue << std::endl;
  std::cout << "&doubleValue : " << &doubleValue << std::endl;
  std::cout << "&referenceToIntValue1 : " << &referenceToIntValue1 << std::endl;
  std::cout << "&referenceToIntValue2 : " << &referenceToIntValue2 << std::endl;
  std::cout << "&referenceToDoubleValue1 : " << &referenceToDoubleValue1 << std::endl;
  std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
  std::cout << "sizeof(int&) : " << sizeof(int&) << std::endl;
  std::cout << "sizeof(referenceToIntValue1) : " << sizeof(referenceToIntValue1) << std::endl;

  std::cout << "----" << std::endl;

  doubleValue = 9.99;

  std::cout << "intValue : " << intValue << std::endl;
  std::cout << "doubleValue : " << doubleValue << std::endl;
  std::cout << "referenceToIntValue1 : " << referenceToIntValue1 << std::endl;
  std::cout << "referenceToIntValue2 : " << referenceToIntValue2 << std::endl;
  std::cout << "referenceToDoubleValue1 : " << referenceToDoubleValue1 << std::endl;
  std::cout << "&intValue : " << &intValue << std::endl;
  std::cout << "&doubleValue : " << &doubleValue << std::endl;
  std::cout << "&referenceToIntValue1 : " << &referenceToIntValue1 << std::endl;
  std::cout << "&referenceToIntValue2 : " << &referenceToIntValue2 << std::endl;
  std::cout << "&referenceToDoubleValue1 : " << &referenceToDoubleValue1 << std::endl;
  std::cout << "sizeof(int) : " << sizeof(int) << std::endl;
  std::cout << "sizeof(int&) : " << sizeof(int&) << std::endl;
  std::cout << "sizeof(referenceToIntValue1) : " << sizeof(referenceToIntValue1) << std::endl;

  return 0;
}