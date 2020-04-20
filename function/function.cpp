#include <iostream>

void HelloWorld(int n) {
  for (int i = 0; i < n; i++) {
    std::cout << "[" << i << "]"
              << "Hello world!" << std::endl;
  }
}

int main() {
  HelloWorld(10);

  return 0;
}