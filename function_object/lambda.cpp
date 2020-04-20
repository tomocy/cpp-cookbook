#include <iostream>

int main() {
  auto add = [](int a, int b) -> int { return a + b; };
  std::cout << add(1, 2) << std::endl;

  return 0;
}