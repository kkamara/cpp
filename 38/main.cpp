#include <iostream>


template <typename T> T maximum(T a, T b);
template <typename T> T printNumber(T n);
template <typename T> requires std::integral <T> T add(T a, T b);
template <std::integral T> T add2(T a, T b);
template <typename T> T add4(T a, T b) requires std::integral <T>;

int main() {
  /* templates
     see project 40 for custom generic types.
  */
  int a{10};
  int b{23};

  double c{34.7};
  double d{23.4};

  std::string_view e{"hello"};
  std::string_view f{"world"};

  std::cout << "max(int) : " << maximum(a, b) << std::endl;
  std::cout << "max(double) : " << maximum(c, d) << std::endl;
  std::cout << "max(string) : " << maximum(e, f) << std::endl;

  // std::cout << "printNumber('hello') : " << printNumber(e) << std::endl; // throws error
  std::cout << "printNumber(5) : " << printNumber(5) << std::endl;

  // char a{10};
  // char a1{20};

  // auto result = add(a, a1);
  // std::cout << "result : " << static_cast<int>(result) << std::endl; // error - template argument deduction/substitution failed 

  int z{11};
  int x{5};

  auto res2 = add(z, x);
  std::cout << "res2 : " << res2 << std::endl;

  return 0;
}

template <typename T> T maximum(T a, T b) {
  return (a>b) ? a : b;
}

template <typename T> T printNumber(T n) {
  /* https://en.cppreference.com/w/cpp/language/static_assert */
  static_assert(
    /* https://en.cppreference.com/w/cpp/header/type_traits */
    std::is_integral<T>::value, "Must pass in an integral arg");
  std::cout << "n : " << n << std::endl;
  return n;
}

template <typename T> requires std::integral <T>
T add(T a, T b) {
  return a + b;
}

template <std::integral T>
T add2(T a, T b) {
  return a + b;
}

auto add3 (std::integral auto a, std::integral auto b) {
  return a + b;
}

template <typename T> T add4(T a, T b) requires std::integral <T> {
  return a + b;
}