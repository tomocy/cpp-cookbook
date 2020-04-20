#include <iostream>

void Print(int x) { std::cout << "int: " << x << std::endl; }

void Print(double x) { std::cout << "double: " << x << std::endl; }

int main() {
  Print(1);
  Print(1.5);

  return 0;
}