#include <iostream>

void Print(int x[5]) {
  for (int i = 0; i < 5; i++) {
    std::cout << x[i] << std::endl;
  }
}

void Print(int n, int* x) {
  for (int i = 0; i < n; i++) {
    std::cout << x[i] << std::endl;
  }
}

int main() {
  int x[5] = {1, 2, 3, 4, 5};
  Print(x);
  Print(5, x);

  return 0;
}