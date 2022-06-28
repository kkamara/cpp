#include <iostream>

int main() {
  char *pCharVar {nullptr};
  char charVar {'A'};

  pCharVar = &charVar;

  std::cout << "The value stored in pCharVar is : " << * pCharVar << std::endl;

  char charVar1 {'C'};
  pCharVar = &charVar1;

  std::cout << "the value stored in pCharVar is : " << * pCharVar << std::endl;

  /*
  char * pMessage { "Hello world" };

  std::cout << "the message is : " << pMessage << std::endl;

  std::cout << "the value stored at pMessage is : " << * pMessage << std::endl;

      ISO C++ forbids converting a string constant to ‘char*’
   */

  const char message[] {"Hello there"};
  // message[0] = 'T';
  std::cout << "message : " << message << std::endl;
  // *message = "B";
  std::cout << "message : " << * message << std::endl;

  char message1[] {"Hello world"};
  message1[0] = 'B';
  std::cout << "message1 : " << message1 << std::endl;

  return 0;
}