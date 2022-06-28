#include <iostream>
#include <cstring>
#include <string>

int main() {
  /*
        const char * stringData1 {"Alabama"};
        const char * stringData2 {"Blabama"};

        const char stringData1[] {"Alabama"};
        const char stringData2[] {"Blabama"};
  */

  const char message[] {"The sky is blue."};

  const char* message2 {"The sky is blue."};
  std::cout << "message : " << message << std::endl;

  // strlen ignored null character
  std::cout << "strlen(message) : " << std::strlen(message) << std::endl;

  // includes the null character
  std::cout << "sizeof(message) : " << sizeof(message) << std::endl;

  // strlen still works with decayed arrays
  std::cout << "strlen(message2) : " << std::strlen(message2) << std::endl;

  // Prints the size of pointer
  std::cout << "sizeof(message2) : " << sizeof(message2) << std::endl;

  std::cout << std::endl;
  std::cout << "std::strcmp : " << std::endl;
  const char * stringData1 {"Alabama"};
  const char * stringData2 {"Blabama"};

  /* https://en.cppreference.com/w/c/string/byte/strcmp */
  std::cout << "std::strcmp (" << stringData1 << "," << stringData2 << ") : "
    << std::strcmp(stringData1, stringData2) << std::endl;
  
  stringData1 = "ALabama";
  stringData2 = "Blabama";

  std::cout << "std::strcmp (" << stringData1 << "," << stringData2 << ") : "
    << std::strcmp(stringData1, stringData2) << std::endl;
  
  stringData1 = "Alacama";
  stringData2 = "Alabama";

  size_t n{3};
  std::cout << std::endl;
  std::cout << "std::strncmp : " << std::endl;
  std::cout << "std::strcmp (" << stringData1 << "," << stringData2 << ") : "
    << std::strcmp(stringData1, stringData2) << std::endl;
  
  stringData1 = "aaaia";
  stringData2 = "aaance";

  std::cout << std::endl;
  std::cout << "std::strcmp (" << stringData1 << "," << stringData2 << ") : "
    << std::strcmp(stringData1, stringData2) << std::endl;

  std::cout << std::endl;
  std::cout << "std::strchr : " << std::endl;

  // we use std::strchr to find all the characters one by one.

  const char *str { "Try not. Do, or do not. There is no try." };
  char target = 'T';
  const char *result = str;
  size_t iterations{};

  while ((result = std::strchr(result, target)) != nullptr) {
    std::cout << "Found '" << target
      << "' starting at '" << result << "'\n";
    
    ++result;
    ++iterations;
  }

  std::cout << "iterations : " << iterations << std::endl;

  // Find last occurence

  std::cout << std::endl;
  std::cout << "std::strrchr : " << std::endl;

  char input[] = "/home/user/hello.cpp";
  char* output = std::strrchr(input, '/');
  if (output)
    std::cout << output + 1 << std::endl; // +1 because we want to start printing past
                                          // the character found by std::strrchr.

  // Concatenation
  std::cout << std::endl;
  std::cout << "std::strcat : " << std::endl;

  char dest[50] = "Hello ";
  char src[50] = "world";
  std::strcat(dest, src); // some compilers (msvc) think these functions are unsafe.
  std::strcat(dest, " Goodbye world");
  std::cout << "dest : " << dest << std::endl;

  // More concatenation
  std::cout << std::endl;
  std::cout << "More std::strcat : " << std::endl;

  char *dest1 = new char[30]{'F','i','r','e','l','o','r','d','\0'};
  char *source1 = new char[30]{',','T','h','e',' ','P','h','e','n','i','x',' ','K','i','n','g','!','\0'};

  std::cout << "std::strlen(dest1) : " << std::strlen(dest1) << std::endl;
  std::cout << "std::strlen(source1) : " << std::strlen(source1) << std::endl;

  std::cout << "Concatenating..." << std::endl;
  std::strcat(dest1, source1);

  std::cout << "std::strlen(dest1) : " << std::strlen(dest1) << std::endl;
  std::cout << "dest1 : " << dest1 << std::endl;

  std::cout << std::endl;
  std::cout << "std::strncat : " << std::endl;
  char dest2[50] {"Hello"};

  char source2[50] {" There is a bird on my window."};

  std::cout << std::strncat(dest2, source2, 6) << std::endl;

  std::strncat(dest2, source2, 6);
  std::cout << "The concatenated string is : " << dest2 << std::endl;
  // The concatenated string is : Hello There There

  std::cout << std::endl;
  std::cout << "std::strcpy : " << std::endl;
  const char* source3 = "C++ is a multipurpose programming language.";
  char *dest3 = new char[std::strlen(source3) + 1]; // +1 for the null character
                                                    // contains garbage data
                                                    // not initialized

  std::strcpy(dest3, source3);

  std::cout << "sizeof(dest3) : " << sizeof(dest3) << std::endl;
  std::cout << "std::strlen(dest3) : " << std::strlen(dest3) << std::endl;
  std::cout << "dest3 : " << dest3 << std::endl;

  std::cout << std::endl;
  std::cout << "std::strncpy : " << std::endl;
  const char* source4 = "Hello";
  char dest4[] = {'a','b','c','d','e','f','\0'}; // have to put the terminating
                                                 // null char if we want to print

  std::cout << "dest4 : " << dest4 << std::endl;

  std::cout << "Copying..." << std::endl;
  std::strncpy(dest4, source4, 5);

  std::cout << "dest4 : " << dest4 << std::endl;
  // dest4 : Hellof

  return 0;
}