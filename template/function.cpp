#include <iostream>

template <typename T>
void Println(T t) {
  std::cout << t << std::endl;
}

template <int N>
int Fibonachi() {
  int vs[N + 1];
  vs[0] = 0;
  vs[1] = 1;

  for (auto i = 2; i <= N; i++) {
    vs[i] = vs[i - 1] + vs[i - 2];
  }

  return vs[N];
}

int main() {
  auto x = Fibonachi<15>();
  Println("Fibonach of 15");
  Println(x);

  return 0;
}