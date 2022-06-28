#include <iostream>

int main(int argc, char **argv) {
  for (unsigned int i{}; i < 10; ++i) {
    std::cout << "I love C++" << std::endl;
  }


  for (unsigned int i{0}; i < 10; ++i) {
    std::cout << "I love C++" << std::endl;
  }

  for (size_t i{}; i < 10; ++i) {
    std::cout << "I love C++" << std::endl;
  }

  size_t j{};

  for (j; j < 10; ++j) {
    std::cout << "Using the j variable from main function local scope : "
      << j << std::endl;
  }
  std::cout << "Loop done, the value of j is : " << j << std::endl;

  const unsigned int COUNT {10};

  unsigned int i {0};

  while( i < COUNT ) {
    std::cout << " I love C++" << std::endl;
    ++i;
  }

  return 0;
}