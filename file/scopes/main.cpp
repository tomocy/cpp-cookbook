#include <iostream>

namespace A {
void Say() { std::cout << "A" << std::endl; }

namespace B {
void Say() { std::cout << "B" << std::endl; }
}  // namespace B
}  // namespace A

namespace Z {
void Say() { std::cout << "Z" << std::endl; }
}  // namespace Z

int main() {
  A::Say();
  A::B::Say();
  Z::Say();

  return 0;
}