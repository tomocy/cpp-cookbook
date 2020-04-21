#include <iostream>
#include <vector>

void Print(std::vector<int> x) {
  for (auto i = x.begin(); i != x.end(); i++) {
    std::cout << *i << std::endl;
  }
}

void Each(std::vector<int>::iterator begin, std::vector<int>::iterator end,
          void (*f)(const int)) {
  for (auto i = begin; i != end; i++) {
    f(*i);
  }
}

int main() {
  std::vector<int> x = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  Print(x);
  Each(x.begin(), x.end(), [](const int v) {
    if (v % 2 == 0) {
      std::cout << v << " is even." << std::endl;
      return;
    }

    std::cout << v << " is odd." << std::endl;
  });

  return 0;
}