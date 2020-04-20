#include <iostream>

int Add(int a, int b) { return a + b; }

int main() {
  int (*add)(int, int) = Add;
  std::cout << add(1, 2) << std::endl;

  return 0;
}