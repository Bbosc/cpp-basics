// 63. Write a C++ program that prints the three highest numbers from a list of numbers in descending order. 
#include <iostream>
#include <algorithm>
#include <vector>


int main (int argc, char *argv[]) {
  std::vector<int> numbers = {1, 2, 3, 4 ,5 ,5, 9};
  std::sort(numbers.begin(), numbers.end(), std::greater<int>());

  for (size_t i {0}; i < 3; i++) {
    std::cout << numbers[i] << '\n';
  }
  return 0;
}
