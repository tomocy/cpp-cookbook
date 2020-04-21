#include <iostream>

void PrintOddOrEven(int x) {
  if (x % 2 == 0) {
    std::cout << x << " is even." << std::endl;
    return;
  }

  std::cout << x << " is odd." << std::endl;
}

int main() {
  int x = 0;
  std::cout << "Number > ";
  if (!(std::cin >> x)) {
    std::cout << "not number" << std::endl;
    return 1;
  }

  PrintOddOrEven(x);

  return 0;
}