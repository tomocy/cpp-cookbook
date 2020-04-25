#include <iostream>
#include <string>

class Moveable {
 public:
  Moveable() {}

  Moveable(Moveable&&) { std::cout << "moved by constructor" << std::endl; };

  Moveable& operator=(Moveable&&) {
    std::cout << "moved by operator" << std::endl;
    return *this;
  };
};

int main() {
  Moveable x;
  Moveable y = std::move(x);
  Moveable z;
  z = std::move(y);

  return 0;
}