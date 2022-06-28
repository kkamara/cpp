#include <iostream>

int main() {
  char message3[] {'H', 'e', 'l', 'l', 'o', '\0'}; /* \0 is the most commonly used octal escape sequence, because it represents the terminating null character in null-terminated strings. */

  std::cout << "message3 : " << message3 << std::endl;
  std::cout << "size : " << std::size(message3) << std::endl;

  char message4[] {"Hello"};
  std::cout << "message4 : " << message4 << std::endl;
  std::cout << "sizeof(message4) : " << sizeof(message4) << std::endl;

  int numbers [] {1,2,3,4,5};
  std::cout << "numbers : " << numbers << std::endl; // numbers : 0x7ffdbd1928b0

  /* array out of bounds */
  int numbers2 [] {1,2,3,4,5,6,7,8,9,0};
  std::cout << "numbers2[12] : " << numbers2[12] << std::endl;
  numbers2[12] = 1000;
  std::cout << "numbers2[12] : " << numbers2[12] << std::endl;
  /*
    numbers2[12] : 1699217519
    numbers2[12] : 1000
  */

  return 0;
}