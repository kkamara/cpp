#include <iostream>
#include <string>

consteval int get_value() {
  return 3;
}

int addNumbers( int first_param, int second_param ) {
  int result = first_param + second_param;
  return result;
}

int main() {
  constexpr int value = get_value();
  std::cout << "value :" << value << std::endl;
  std::cout << "test\n";
  int num1 {13};
  int num2 {7};
  std::cout << "first number : " << num1 << std::endl;
  std::cout << "second number : " << num2 << std::endl;

  int sum = num1 + num2;
  std::cout << "Sum : " << sum << std::endl;

  sum = addNumbers(25, 7);
  std::cout << "Sum : " << sum << std::endl;

  sum = addNumbers(30, 54);
  std::cout << "Sum : " << sum << std::endl;

  std::cout << "Sum : " << addNumbers(3, 42) << std::endl;

  std::clog << "logging stuff\n";
  
  std::cerr << "error occurred\n";

  std::string name = "John Doe";
  std::cout << name << std::endl;

  /*
  std::cout << "Please type in your first and last name." << std::endl;
  std::string firstName, lastName;
  std::cin >> firstName >> lastName;
  std::cout << firstName << " " << lastName << std::endl;
  */

  std::string fullName;
  std::cout << "Please type in your full name : " << std::endl;
  std::getline(std::cin, fullName);
  std::cout << "Hi " + fullName << std::endl;

  return 0;
}