#include <iostream>

int main() {
  for (size_t i{}; i < 100000000000; ++i) {
    try {
      int* lotsOfInts3 { new int[10000000] };
    }catch(std::exception& ex) {
      std::cout << "Cought exception ourselves : " << ex.what() << std::endl;
    }
  }

  return 0;
}