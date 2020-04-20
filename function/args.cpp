#include <iostream>

int main(int c, char* v[]) {
  for (int i = 0; i < c; i++) {
    std::cout << "argv[" << i << "]" << v[i] << std::endl;
  }

  return 0;
}