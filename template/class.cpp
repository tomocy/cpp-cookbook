#include <iostream>
#include <vector>

template <typename T>
void Println(T t) {
  std::cout << t << std::endl;
}

template <typename T>
class Slice {
 public:
  int Len() { return data_.size(); }

  void Append(T v) { data_.push_back(v); }

  T Get(int i) { return data_[i]; }

  void Set(int i, T v) { data_[i] = v; }

 private:
  std::vector<T> data_;
};

int main() {
  {
    auto s = Slice<int>();
    s.Append(10);
    s.Append(20);

    for (auto i = 0; i < s.Len(); i++) {
      Println(s.Get(i));
    }
  }

  return 0;
}