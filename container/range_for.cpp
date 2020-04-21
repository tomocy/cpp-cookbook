#include <iostream>
#include <vector>

void Print(std::vector<int> x) {
  for (auto v : x) {
    std::cout << v << std::endl;
  }
}

int main() {
  std::vector<int> x = {1, 2, 3, 4, 5};
  Print(x);

  return 0;
}