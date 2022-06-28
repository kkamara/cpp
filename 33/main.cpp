#include <iostream>

int main() {
  std::cout << std::endl;
  std::cout << "std::isalnum : " << std::endl;

  std::cout << "C is alphanumeric : " << std::isalnum('C') << std::endl;
  std::cout << "^ is alphanumeric : " << std::isalnum('^') << std::endl;

  char inputChar {'*'};
  if (std::isalnum(inputChar)) {
    std::cout << inputChar << " is alphanumeric." << std::endl;
  } else {
    std::cout << inputChar << " is not alphanumeric." << std::endl;
  }

  std::cout << std::endl;
  std::cout << "std::isalpha : " << std::endl;
  std::cout << "C is alphabetic : " << std::isalpha('C') << std::endl;
  std::cout << "^ is alphabetic : " << std::isalpha('^') << std::endl;
  std::cout << "7 is alphabetic : " << std::isalpha('7') << std::endl;

  std::cout << std::endl;
  std::cout << "std::isblank : " << std::endl;
  char message[] {"Hello there. How are you doing? The sun is shining."};
  std::cout << "message : " << message << std::endl;

  size_t blankCount{};
  for (size_t i{}; i < std::size(message); ++i) {
    // std::cout << "Value : " << message[i] << std::endl;
    if (std::isblank(message[i])) {
      std::cout << "Found a blank character at index : [" << i << "]" << std::endl;
      ++blankCount;
    }
  }

  std::cout << "In total we found " << blankCount << " blank characters." << std::endl;

  std::cout << "std::islower and std::isupper : " << std::endl;

  std::cout << std::endl;
  char thought[] {"The C++ programming language is one of the most used on the planet."};
  size_t lowercaseCount {};
  size_t uppercaseCount {};

  std::cout << "Original string : " << thought << std::endl;

  for (auto character : thought) {
    if (std::islower(character)) {
      std::cout << " " << character;
      ++lowercaseCount;
    }
    if (std::isupper(character)) {
      ++uppercaseCount;
    }
  }

  std::cout << std::endl;
  std::cout << "Found " << lowercaseCount << " lowercase characters and "
    << uppercaseCount << " uppercase characters." << std::endl;

  std::cout << std::endl;
  std::cout << "std::isdigit : " << std::endl;

  char statement[] {"Mr Hamilton owns 221 cows. That's a lot of cows! The kid exclamed."};
  std::cout << "statement : " << statement << std::endl;

  size_t digitCount{};

  for (auto character : statement) {
    if (std::isdigit(character)) {
      std::cout << "Found digit : " << character << std::endl;
      ++digitCount;
    }
  }

  std::cout << "Found " << digitCount << " digits in the statement string" << std::endl;

  std::cout << std::endl;
  std::cout << "std::tolower and std::toupper : " << std::endl;
  char originalStr[] {"Home. The feeling of belonging."};
  char destStr[std::size(originalStr)];

  for (size_t i{}; i < std::size(originalStr); ++i) {
    destStr[i] = std::toupper(originalStr[i]);
  }

  std::cout << "Original string : " << originalStr << std::endl;
  std::cout << "Uppercase string : " << destStr << std::endl;

  for (size_t i{}; i < std::size(originalStr); ++i) {
    destStr[i] = std::tolower(originalStr[i]);
  }

  std::cout << "Lowercase string : " << destStr << std::endl;

  return 0;
}