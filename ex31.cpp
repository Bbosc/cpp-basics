// 31. Write a C++ program to input a single-digit number and print it in a rectangular form of 4 columns and 6 rows. 
#include <iostream>


int main (int argc, char *argv[]) {
  std::cout << "enter an integer: ";
  int a{};
  std::cin >> a;
  size_t rows {6};
  size_t columns {4};
  for (size_t i = 0; i < rows ; i++) {
    for (size_t j = 0; j < columns; j++) {
      std::cout << a;
    }
    std::cout << '\n';
  }
  return 0;
}
