#include <iostream>

void Add(int target, int by) { target += by; }

void Add(int* target, int by) { *target += by; }

void Println(int x) { std::cout << x << std::endl; }

int main() {
  int x = 10;
  Add(x, 5);
  Println(x);

  Add(&x, 5);
  Println(x);

  return 0;
}