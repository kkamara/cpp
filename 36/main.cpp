#include <iostream>
#include "person.h"
#include "some_other_file.h"


void exampleFunc();
void exampleFunc(int* age);
void sayAge(int* age);
void sayAge2(int& age);

double weight {};

struct Point
{
  double m_x{};
  double m_y{};
};

int Person::personCount = 8;

Person::Person(const std::string& namesParam, int ageParam)
  : fullName{namesParam}, age{ageParam} {
    ++personCount;
  }

int main() {

  Person p1("John Snow", 35);
  p1.printInfo();

  double result = add(10,20);
  std::cout << "result : " << result << std::endl;

  /*
      name : John Snow , age : 35
      result : 30
  */

  // Point p1;
  // std::cout << "p1.x : " << p1.m_x << " , p1.y : " << p1.m_y << std::endl;

  int aValue {14};
  int bValue {10};

  int a{33};
  int b{41};

  std::cout << "Calling the enterBar function : " << std::endl;
  enterBar(22);

  int maxNumber {max(aValue, bValue)};

  std::cout << "max(" << aValue << ", " << bValue << ") : " << maxNumber << std::endl;

  std::cout << "Calling sayHello method : " << std::endl;
  sayHello();

  std::cout << "Your lucky number is : " << luckyNumber() << std::endl;

  a = 100;
  b = 200;

  std::cout << "max(" << a << ", " << b << ") : " << max(a,b) << std::endl;
  std::cout << "max(" << 500 << ", " << 303 << ") : " << max(500,303) << std::endl;

  char d{55};
  char e{51};

  double f{12.33};
  double g{51.25};

  std::cout << std::endl;
  std::cout << "Calling min function with char args : " << std::endl;

  int minNumber {min(d,e)};
  std::cout << "min(" << static_cast<int>(d) << "," << static_cast<int>(e)
    << minNumber << std::endl;
  
  // Doubles will under an implicit narrowing conversion
  // from double to int. Info after decimal point will be lost.
  std::cout << std::endl;
  std::cout << "Calling min function with double args : " << std::endl;
  minNumber = min(f, g);
  std::cout << "min(" << f << "," << g << ") : "
    << minNumber << std::endl;

  incrementMultiply(f, g);

  std::cout << std::endl;
  std::cout << "arg score : COPIES " << std::endl;
  double h{3.00};
  double i{4.00};

  std::cout << "Outside func, before inc : " << std::endl;
  std::cout << "h : " << h << std::endl;
  std::cout << "i : " << i << std::endl;

  double incrMultiRes = incrementMultiply(h, i);

  std::cout << "Outside func, after inc : " << std::endl;
  std::cout << "h : " << h << std::endl;
  std::cout << "i : " << i << std::endl;

  /*
      arg score : COPIES 
      Outside func, before inc : 
      h : 3
      i : 4
      Inside function, before increment : 
      a : 3
      b : 4
      Inside function, after increment : 
      a : 4
      b : 5
      Outside func, after inc : 
      h : 3
      i : 4
  */

  exampleFunc();

  int age{23};
  std::cout << "age (before call) : " << age << " &age : " << &age << std::endl;
  sayAge(&age);
  std::cout << "age (after call) : " << age << " &age : " << &age << std::endl;

  std::cout << "age - before : " << age << std::endl;
  sayAge2(age);
  std::cout << "age - after : " << age << std::endl;

  return 0;
}

void exampleFunc() {
  std::cout << "In exampleFunc()" << std::endl;
}

void sayAge(int* age) {
  ++(*age);
  std::cout << "Hello, you are " << *age << " years old! &age : " << &age << std::endl;
}

void sayAge2(int& age) {
  ++(age);
  std::cout << "Hello, you are " << age << " years old!" << std::endl;
}
