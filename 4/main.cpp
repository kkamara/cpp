#include <iostream>
#include <iomanip>

int main() {
  std::cout << std::setprecision(20);
  // float num4 {19240023.0f}; // error : narrowing conversion (19240024)
  double num4 {19240023.0};
  std::cout << num4 << std::endl;
  double num7 {1.924e8};
  std::cout << num7 << std::endl;

  bool redLight {true};
  bool greenLight {false};

  if (redLight == true) {
    std::cout << "stop" << std::endl;
  } else {
    std::cout << "go" << std::endl;
  }

  if (greenLight) {
    std::cout << "the light is green" << std::endl;
  } else {
    std::cout << "the light is not green" << std::endl;
  }

  std::cout << std::endl;
  std::cout << "red light : " << redLight << std::endl;
  std::cout << "green light : " << greenLight << std::endl;

  std::cout << std::endl;
  std::cout << std::boolalpha; // forces the output format to true/false
  std::cout << "red light : " << redLight << std::endl;
  std::cout << "green light : " << greenLight << std::endl;

  std::cout << "sizeof(bool) : " << sizeof(bool) << std::endl; // 1

  char character1 {'a'};
  char character2 {'r'};
  char character3 {'r'};
  char character4 {'o'};
  char character5 {'w'};

  std::cout << character1 << std::endl;
  std::cout << character2 << std::endl;
  std::cout << character3 << std::endl;
  std::cout << character4 << std::endl;
  std::cout << character5 << std::endl;

  char value = 65;
  std::cout << "value : " << value << std::endl;
  std::cout << "value(int) : " << static_cast<int>(value) << std::endl;

  return 0;
}