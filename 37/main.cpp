#include <iostream>


int max(int a, int b) {
  std::cout << "int overload called" << std::endl;
  return (a>b) ? a : b;
}

double max(double a, double b) {
  std::cout << "double overload called" << std::endl;
  return (a>b) ? a : b;
}

double max(int a, double b) {
  std::cout << "(int, double) overload called" << std::endl;
  return (a>b) ? a : b;
}

double max(double a, int b) {
  std::cout << "(double, int) overload called" << std::endl;
  return (a>b) ? a : b;
}

double max(double a, int b, int c) {
  std::cout << "(double, int, int) overload called" << std::endl;
  return (a>b) ? a : b;
}

/* https://en.cppreference.com/w/cpp/string/basic_string_view */
std::string_view max(std::string_view a, std::string_view b) {
  std::cout << "(string_view, string_view) overload called" << std::endl;
  return (a>b) ? a : b;
}

int main() {
  /* lambdas */
  int x{4};
  int y{9};
  double a{5.4};
  double b{7.4};

  auto result = max(b,y);
  std::cout << "result - " << result << " sizeof(result) - " << sizeof(result) << std::endl;
  std::cout << "sizeof(int) - " << sizeof(int) << std::endl;

  auto func = [](){
    std::cout << "Hello world" << std::endl;
  }; 
  [](){
    std::cout << "Hello world2" << std::endl;
  }();

  // Capturing by value : what we have in the lambda function
  //                            is a copy
  int c{42};

  auto func2 = [c](){
    std::cout << "Inner value : " << c << std::endl;
  };

  for (size_t i{}; i < 5; ++i) {
    std::cout << "Outer value : " << c << std::endl;
    func2();
    ++c;
  }

  func();

  /*
        (double, int) overload called
        result - 9 sizeof(result) - 8
        sizeof(int) - 4
        Hello world2
        Outer value : 42
        Inner value : 42
        Outer value : 43
        Inner value : 42
        Outer value : 44
        Inner value : 42
        Outer value : 45
        Inner value : 42
        Outer value : 46
        Inner value : 42
        Hello world
  */
  
  // Capturing by reference : Working on the original outside value

  int c2{42};

  auto func3 = [&c2](){
    std::cout << "Inner value : " << c2 << std::endl;
  };

  for(size_t i{}; i < 5; ++i) {
    std::cout << "Outer value : " << c2 << std::endl;
    func3();
    ++c2;
  }

  /*
      Outer value : 42
      Inner value : 42
      Outer value : 43
      Inner value : 43
      Outer value : 44
      Inner value : 44
      Outer value : 45
      Inner value : 45
      Outer value : 46
      Inner value : 46
  */
  
  std::cout << std::endl;

  //  Capturing everything by value

  int c3{42};

  auto func4 = [=](){
    std::cout << "Inner value : " << c3 << std::endl;
  };

  for (size_t i{}; i < 5; ++i) {
    std::cout << "Outer value : " << c3 << std::endl;
    func4();
    ++c3;
  }

  /*
      Outer value : 42
      Inner value : 42
      Outer value : 43
      Inner value : 42
      Outer value : 44
      Inner value : 42
      Outer value : 45
      Inner value : 42
      Outer value : 46
      Inner value : 42
  */
  
  std::cout << std::endl;

  //  Capturing everything by reference

  int c4{42};

  auto func5 = [&](){
    std::cout << "Inner value : " << c4 << std::endl;
  };

  for (size_t i{}; i < 5; ++i) {
    std::cout << "Outer value : " << c4 << std::endl;
    func5();
    ++c4;
  }

  /*
      Outer value : 42
      Inner value : 42
      Outer value : 43
      Inner value : 43
      Outer value : 44
      Inner value : 44
      Outer value : 45
      Inner value : 45
      Outer value : 46
      Inner value : 46
  */

  return 0;
}