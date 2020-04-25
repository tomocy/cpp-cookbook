#include <iostream>
#include <string>

void PrintlnLeftly(std::string s) { std::cout << "left: " << s << std::endl; }

void PrintlnRightly(std::string&& s) {
  std::cout << "right: " << s << std::endl;
}

int main() {
  auto s = "hello world";
  PrintlnLeftly(s);
  PrintlnRightly(std::move(s));

  return 0;
}