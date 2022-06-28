#include <iostream>

int main() {
  int * pNumber {};
  double * pFractionalNumber{};

  int * pNumber1{nullptr};
  int * pFractionalNumber1{nullptr};

  std::cout << "Size of number pointer : " << sizeof(pNumber)
    << ", size of int : " << sizeof(int) << std::endl;
  std::cout << "Size of fractionalNumber pointer : " << sizeof(pFractionalNumber)
    << ", size of double : " << sizeof(double) << std::endl;
  std::cout << "Size of number1 pointer : " << sizeof(pNumber1)
    << ", size of int : " << sizeof(int) << std::endl;
  std::cout << "Size of fractionalNumber1 : " << sizeof(pFractionalNumber1)
    << ", size of double : " << sizeof(double) << std::endl;

  int intVar {43};
  int *pInt{&intVar};

  std::cout << "Int var : " << intVar << std::endl;
  std::cout << "pInt (address in memory) : " << pInt << std::endl;

  int intVar1 {65};
  intVar1 = 126;

  pInt = &intVar1;
  std::cout << "pInt (with different address) : " << pInt << std::endl;

  int* pInt2 {nullptr};
  int intData {56};
  pInt2 = &intData;

  std::cout << "value : " << *pInt2 << std::endl;

  return 0;
}