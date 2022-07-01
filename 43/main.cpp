#include <concepts>
#include <iostream>
#include "cyclinder.h"


/* classes
   https://en.cppreference.com/w/cpp/language/class 
   see more in project 36
   See project 47 for destructors.*/


/* 
  https://en.cppreference.com/w/cpp/language/virtual
  https://en.cppreference.com/book/intro/abstract_classes
  https://en.cppreference.com/w/cpp/language/friend
  https://www.fluentcpp.com/2020/02/21/virtual-final-and-override-in-cpp/
  https://www.tutorialspoint.com/pure-virtual-functions-and-abstract-classes-in-cplusplus
*/

int main(int argc, char **argv) {
  /* class instances */
  Cyclinder cyclinder;
  std::cout << "volume c1 : " << cyclinder.volume() << std::endl;

  cyclinder.baseRadius = 3.0;
  cyclinder.height = 2;
  std::cout << "volume c1 : " << cyclinder.volume() << std::endl;

  Cyclinder cyclinder2;
  std::cout << "volume c2 : " << cyclinder2.volume() << std::endl;

  // Cyclinder* pCyclider = &cyclinder2;
  // Cyclinder* pCyclider2 = new Cyclinder(100, 2);
  // (*pCyclider2).pVolume();
  // cyclider->volume()->other();
  // pCyclider2->pVolume()->pOther(); // pointer version
  // delete pCyclider;
  // delete pCyclider2;

  std::cout << "volume c2 example : " << cyclinder2.example << std::endl;

  Cyclinder c3(4, 6);
  std::cout << "volume c3 : " << c3.volume() << std::endl;
  
  // See project 47 for destructors.
  // Cyclinder* c4(6, 8); error
  Cyclinder* c4 = new Cyclinder(6, 8);
  delete c4;

  return 0;
}