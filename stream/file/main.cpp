#include <fstream>
#include <iostream>
#include <string>

int main(int n, char* args[]) {
  if (n < 2) {
    std::cout << "too few arugments: filename is required" << std::endl;
    return 1;
  }

  std::string fname = args[1];

  std::cout << "enter > ";
  std::string input;
  if (!(std::cin >> input)) {
    std::cout << "invalid input" << std::endl;
    return 1;
  }

  std::ofstream dst(fname, std::ios::app);
  dst << input << std::endl;

  std::ifstream src(fname);
  std::string line;
  while (std::getline(src, line)) {
    std::cout << line << std::endl;
  }

  return 0;
}