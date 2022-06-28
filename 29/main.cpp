#include <iostream>

int main() {
  const size_t size{10};

  // Different ways you can declare an array
  // dynamically and how they are initialized.

  double *pSalaries { new double[size] }; // salaries array will
                                          // contain garbage values.
  int *pStudents { new(std::nothrow) int[size]{} }; // All values initialized to 0.

  double *pScores { new (std::nothrow) double[size]{1,2,3,4,5} }; // Allocating memory space
                                                                  // for an array of size double
                                                                  // vars. First 5 will be initialized
                                                                  // with 1,2,3,4,5, and the
                                                                  // rest will be 0's.

  delete [] pSalaries;
  delete [] pStudents;
  delete [] pScores;
  pSalaries = nullptr;
  pStudents = nullptr;
  pScores = nullptr;

  // Static arrays vs dynamic arrays
  std::cout << "=========================================" << std::endl;

  int scores[10] {1,2,3,4,5,6,7,8,9,10}; // Lives on the stack.

  std::cout << "scores size : " << std::size(scores) << std::endl;

  for( auto s : scores ) {
    std::cout << "value : " << s << std::endl;
  }

  int* pScores1 = new int[10] {1,2,3,4,5,6,7,8,9,10};
  // std::cout << "pScores1 size : " << std::size(pScores1) << std::endl;

  /*
      error
  for( auto s : pScores1 ) {
    std::cout << "value : " << s << std::endl;
  }
  */

  return 0;
}