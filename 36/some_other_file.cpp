#include <iostream>

/*
    The linker searches for definitions in all translation units (.cpp)
    files in the project. Doesn't have to live in a cpp file with the
    same name as the header.
*/

/* implementation */

double add(double a, double b) {
  return a + b;
}

void enterBar (int age) {
  if (age > 18) {
    std::cout << "You're " << age << " years old. Please proceed." << std::endl;
  } else {
    std::cout << "Sorry, you're too young for this. No offense!" << std::endl;
  }
}

int max( int a, int b ) {
  if (a > b) 
    return a;
  else
    return b;
}

int min( int a, int b ) {
  if (a > b) 
    return b;
  else
    return a;
}

void sayHello() {
  std::cout << "Hello there" << std::endl;
  return;
}

int luckyNumber() {
  return 99;
}

double incrementMultiply( double a, double b ) {

  std::cout << "Inside function, before increment : " << std::endl;
  std::cout << "a : " << a << std::endl;
  std::cout << "b : " << b << std::endl;

  double result = ((++a) * (++b));

  std::cout << "Inside function, after increment : " << std::endl;
  std::cout << "a : " << a << std::endl;
  std::cout << "b : " << b << std::endl;

  return result;
}