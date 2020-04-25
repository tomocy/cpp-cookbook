#include <iostream>
#include <memory>
#include <string>

void Println(int x) { std::cout << x << std::endl; }
void Println(std::string s) { std::cout << s << std::endl; }

void Share(int v) {
  Println("share:");

  auto x = std::make_shared<int>(v);

  {
    auto y = x;
    Println(*y);
  }

  Println(*x);
}

void Watch(int v) {
  Println("watch:");

  auto shared = std::make_shared<int>(v);
  std::weak_ptr<int> weak = shared;

  auto locked = weak.lock();
  if (locked) {
    Println(*locked);
  }
}

void Lock(int v) {
  Println("Lock:");

  std::unique_ptr<int> x(new int(v));
  Println(*x);

  auto y = std::move(x);
  *y *= 2;
  Println(*y);
}

int main() {
  auto v = 100;

  Share(v);
  Watch(v);
  Lock(v);

  return 0;
}