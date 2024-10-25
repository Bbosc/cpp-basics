// 68. Write a C++ program that reads seven numbers and sorts them in descending order. 
#include <iostream>
#include <vector>
#include <algorithm>

int main (int argc, char *argv[]) {
  
  std::cout << "input seven numbers: ";
  size_t length {7};
  std::vector<int> array(length);
  for (size_t i = 0; i < length; i++) {
    std::cin >> array[i];
  }
  std::sort(array.begin(), array.end(), std::greater<int>());
  for (auto v: array) {
    std::cout << v << ' ';
  }
  std::cout << std::endl;
  return 0;
}
