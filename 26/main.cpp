#include <iostream>

int main() {
  /* simulating memory allocation failure */

  // Try to allocate a insanely huge array in one go
  // Unhandled new failure : Crash
  int* lotsOfInts1 { new int[10000000000000000] }; // May give an error about
                                                   // exceeding array size.

  // Use a huge loop to try and exhaust the memory capabilities
  // of your system. When new fails, your program is going to
  // forcefully terminate.

  for (size_t i{}; i < 10000000000; ++i) {
    int* lotsOfInts2 { new int[1000000] };
  }


  return 0;
}