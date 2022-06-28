#include <iostream>

double weight {};

double add(double a, double b);

struct Point
{
  double m_x{};
  double m_y{};
};

int main() {
  class Person{
    public :
      Person(const std::string& namesParam, int ageParam);

      void printInfo()const{
        std::cout << "name : " << fullName << " , age : " << age << std::endl;
      }
    private :
      std::string fullName;
      int age;
  };

  double result = add(10,20);
  std::cout << "result : " << result << std::endl;

  Point p1;
  std::cout << "p1.x : " << p1.m_x << " , p1.m_y : " << p1.m_y << std::endl;

  return 0;
}

double add(double a, double b) {
  return a + b;
}