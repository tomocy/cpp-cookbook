#include <iostream>
#include <string>

class Copyable {
 public:
  Copyable(){};

  Copyable(const Copyable&) {
    std::cout << "copied by constructor" << std::endl;
  };

  Copyable& operator=(const Copyable&) {
    std::cout << "copied by operator" << std::endl;
    return *this;
  };
};

int main() {
  Copyable x;
  Copyable y = Copyable(x);
  Copyable z;
  z = y;

  return 0;
}