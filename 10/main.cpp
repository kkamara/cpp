#include <iostream>

int main() {

  std::cout << std::endl;
  std::cout << "speed" << std::endl;
  bool fast = false;
  
  int speed { fast ? 300 : 150 };

  std::cout << "The speed is : " << speed << std::endl;

  return 0;
}