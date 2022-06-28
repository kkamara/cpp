#include <iostream>

int main() {
  auto var1 {12};
  auto var2 {13.0};
  auto var3 {14.0f};
  auto var4 {15.01};
  auto var5 {'e'};

  // int modifier suffixes
  auto var6 { 123u }; // unsigned
  auto var7 { 123ul }; // unsigned long
  auto var8 { 12311 }; // long long

  std::cout << "var1 occupies : " << sizeof(var1) << " bytes" << std::endl;
  std::cout << "var2 occupies : " << sizeof(var2) << " bytes" << std::endl;
  std::cout << "var3 occupies : " << sizeof(var3) << " bytes" << std::endl;
  std::cout << "var4 occupies : " << sizeof(var4) << " bytes" << std::endl;
  std::cout << "var5 occupies : " << sizeof(var5) << " bytes" << std::endl;
  std::cout << "var6 occupies : " << sizeof(var6) << " bytes" << std::endl;
  std::cout << "var7 occupies : " << sizeof(var7) << " bytes" << std::endl;
  std::cout << "var8 occupies : " << sizeof(var8) << " bytes" << std::endl;

  int var9{123}; // declare and initialize
  var9 = 10; // assign

  auto var10 {333u}; // declare and initialize with type deducation (333)
  std::cout << "var10 : " << var10 << std::endl; // (333)
  var10 = -22; // assign negative number. DANGER
  std::cout << "var10 : " << var10 << std::endl; // (4294967274)

  return 0;
}