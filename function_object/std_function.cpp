#include <iostream>

int Add(int a, int b) { return a + b; }

int main() {
  std::function<int(int, int)> add = Add;
  std::cout << add(1, 2) << std::endl;

  return 0;
}