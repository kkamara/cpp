

int main() {
  // Double allocation
  int *pNumber1 {new int{55}};

  // Use the pointer

  // Should delete and reset here.

  pNumber1 = new int{44}; // memory with int{55 leaked.}

  {
    int *pNumber2 {new int{57}};
  }
  // Memory with int{57} leaked.

  return 0;
}