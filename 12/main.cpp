#include <iostream>

int main() {

  const unsigned int COUNT{10};
  unsigned int i {11};

  do {
    std::cout << "[" << i << "] : I love C++" << std::endl;
    ++i;
  }while(i < COUNT);

  for (uint8_t j{}; j < COUNT; ++j) {
    std::cout << "I love C++" << std::endl;
  }


  for (size_t n{}; n < COUNT; ++n) {
    std::cout << "I love C++" << std::endl;
  }

  return 0;
}