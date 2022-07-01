#include <concepts>
#include <iostream>


/* concepts 
   https://en.cppreference.com/w/cpp/language/constraints
*/

/* https://en.cppreference.com/w/cpp/concepts/same_as */
template<typename T, typename ... U>
concept IsAnyOf = (std::same_as<T, U> || ...);
 
template<typename T>
concept IsPrintable = std::integral<T> || std::floating_point<T> ||
    IsAnyOf<std::remove_cvref_t<std::remove_pointer_t<std::decay_t<T>>>, char, wchar_t>;

void println(IsPrintable auto const ... arguments)
{
    (std::wcout << ... << arguments) << '\n';
}

/* https://en.cppreference.com/w/cpp/language/string_literal */
int main() { println("Example: ", 3.14, " : ", 42, " : [", 'a', L'-', L"Z]"); }

template <typename T>
concept MyIntegral = std::is_integral_v<T>;

template <typename T>
concept Multipliable = requires(T a, T b) {
  a * b;
};

template <typename T>
concept Incrementable = requires(T a, T b) {
  a += 1;
  ++a;
  a++;
};

MyIntegral auto add(MyIntegral auto a, MyIntegral auto b) {
  return a + b;
}

template <typename T>
concept TinyType = requires( T t ) {
  sizeof(T) <= 4; // simple requirement : only checks syntax
  requires sizeof(T) <= 4; // nested requirement : checks the if the expression is true
  
  {t} noexcept -> std::convertible_to<int>; // compound requirement.
  // checks of a + b is valid syntax, doesn't throw exceptions(optional), and the result
  // is convertible to int(optional).
};