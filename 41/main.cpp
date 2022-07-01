#include <concepts>
#include <iostream>


/* combining generic concepts 
   see projects 38 and 40
*/

template <typename T>
concept TinyType = requires (T t) {
  sizeof(T) <= 4;
  requires sizeof(T) <= 4;
};

template <typename T>
T func(T t) requires std::integral<T> &&
                                    requires (T t) {
                                      sizeof(T) <= 4;
                                      requires sizeof(T) <= 4;
                                    };

int main() {
  TinyType auto t{5};
  {
    std::cout << "value : " << t << std::endl;
    // return (2*t);
  }
}