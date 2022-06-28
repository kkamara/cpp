#include <iostream>

int main() {
  int scores[10];

  std::cout << std::endl;
  std::cout << "Reading out score values (manually) : " << std::endl;
  std::cout << "scores[0] : " << scores[0] << std::endl;
  std::cout << "scores[1] : " << scores[1] << std::endl;

  std::cout << "scores[9] : " << scores[9] << std::endl;

  char message[5] {'H', 'e', 'l', 'l', 'o'};

  std::cout << "message : ";
  for (auto c : message) {
    std::cout << c;
  }
  std::cout << std::endl;
  std::cout << "size : " << std::size(message) << std::endl;

  std::cout << std::endl;
  std::cout << "Modify array data : " << std::endl;

  message[1] = 'a';

  std::cout << "message : ";
  for (auto c : message) {
    std::cout << c;
  }

  return 0;
}