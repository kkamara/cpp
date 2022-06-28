#include <iostream>
#include <iomanip>

int main() {
  float num1 {1.12345678901234567890f};
  double num2 {1.12345678901234567890};
  long double num3 {1.12345678901234567890L};

  std::cout << "sizeof float : " << sizeof(float) << std::endl;
  std::cout << "sizeof double : " << sizeof(double) << std::endl;
  std::cout << "sizeof long double : " << sizeof(long double) << std::endl;

  std::cout << "number1 is : " << num1 << std::endl; // 1.12346
  std::cout << "number2 is : " << num2 << std::endl;
  std::cout << "number3 is : " << num3 << std::endl;
  std::cout << "setting precision to 20\n";
  std::cout << std::setprecision(20);
  std::cout << "number1 is : " << num1 << std::endl; // 1.1234568357467651367
  std::cout << "number2 is : " << num2 << std::endl;
  std::cout << "number3 is : " << num3 << std::endl;

  double num10 {5.6};
  double num11 {};
  double num12 {};

  double result { num10 / num11 }; // infinity

  std::cout << num10 << "/" << num11 << " yields " << result << std::endl;
  std::cout << result << " + " << num10 << " yields " << result + num10 << std::endl;

  result = num11 / num12;

  std::cout << num11 << "/" << num12 << " = " << result << std::endl;

  return 0;
}