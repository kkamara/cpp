#include <iostream>

int main() {
  std::string fullName;
  std::string planet {"Earth. Where the sky is blue."};
  std::string preferredPlanet {planet};
  std::string message {"Hello there", 5}; // initialize with part of a string literal.
                                          // contains hello

  std::string weirdMessage{4, 'e'}; // initialize with multiple copies of a char.
                                    // contains eeee

  std::string greeting{"Hello world"};
  std::string sayingHello{ greeting, 6, 5 }; // initialize with part of an existing std::string
                                             // starting at index 6, taking 5 characters.
                                             // will contain world

  std::cout << "fullName : " << fullName << std::endl;
  std::cout << "planet : " << planet << std::endl;
  std::cout << "preferredPlanet : " << preferredPlanet << std::endl;
  std::cout << "message : " << message << std::endl;
  std::cout << "weirdMessage : " << weirdMessage << std::endl;
  std::cout << "greeting : " << greeting << std::endl;
  std::cout << "sayingHello : " << sayingHello << std::endl;

  // changing std::string at runtime.
  planet = "Earth. Where the sky is blue. Earth. Where the sky is blue. Earth. Where ";
  std::cout << "planet : " << planet << std::endl;

  // use a raw array.
  const char * planet1 {"Earth. Where the sky is blue Earth."};
  planet1 = "Earth. Where the sky is blue Earth. Earth. Where the sky is blue Earth. Where ";
  std::cout << "planet1 : " << planet1 << std::endl;

  return 0;
}