// 13. Write a C++ program that swaps two numbers. 
#include <iostream>


int main (int argc, char *argv[]) {
  std::cout << "enter value of first variable: ";
  int x{};
  std::cin >> x;
  std::cout << "enter value of second variable: ";
  int y{};
  std::cin >> y;
  
  int z{x}; // intermediate variable
  x = y;
  y = z;
  std::cout << "final value of x after swap: " << x << '\n';
  std::cout << "final value of y after swap: " << y << '\n';
  return 0;
}

