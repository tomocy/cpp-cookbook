#include <array>
#include <iostream>

void Print(std::array<int, 5> x) {
  for (int i = 0; i < x.size(); i++) {
    std::cout << x[i] << std::endl;
  }
}

int main() {
  std::array<int, 5> x = {1, 3, 5, 7, 9};
  Print(x);

  return 0;
}