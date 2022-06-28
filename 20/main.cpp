#include <iostream>

int main(int argc, char **argv) {
  {
    int localScopeVar {33};
    int *localPtrVar = new int;
    std::cout << "*localPtrVar : " << *localPtrVar << std::endl; // *localPtrVar : 0
    delete localPtrVar;
  }

  int *pNumber4{nullptr};
  pNumber4 = new int;

  delete pNumber4;
  pNumber4 = nullptr;

  /*
  delete localPtrVar;

      ‘localPtrVar’ was not declared in this scope
  */

  int *pNumber5 {nullptr};
  pNumber5 = new int;

  *pNumber5 = 77;
  std::cout << std::endl;
  std::cout << "Dynamically allocating memory : " << std::endl;
  std::cout << "*pNumber5 : " << *pNumber5 << std::endl;

  //  Return memory to the OS.
  delete pNumber5;
  /*
    *pNumber4 = 45;
        Segmentation fault (core dumped)
  */

  return 0;
}