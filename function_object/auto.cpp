#include <iostream>

int Add(int a, int b) { return a + b; }

int main() {
  auto add = Add;
  std::cout << add(1, 2) << std::endl;

  return 0;
}