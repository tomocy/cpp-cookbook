#include <iostream>

class Polygon {
 public:
  virtual int Area() const = 0;

 protected:
  virtual ~Polygon() {}
};

class Rectangle : public Polygon {
 public:
  Rectangle() : height_(0), width_(0) {}
  Rectangle(int height, int width) : height_(height), width_(width) {}
  int Area() const override { return height_ * width_; }

 private:
  int height_;
  int width_;
};

class Square : public Rectangle {
 public:
  Square(int size) : Rectangle(size, size) {}
};

void Println(int v) { std::cout << v << std::endl; }

void PrintlnArea(const Polygon* p) { Println(p->Area()); }

int main() {
  const auto r = new Rectangle(10, 5);
  const auto s = new Square(4);

  PrintlnArea(r);
  PrintlnArea(s);

  return 0;
}