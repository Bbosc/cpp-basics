//4. Write a program in C++ to print the sum of two numbers using variables
#include <iostream>

int main (int argc, char *argv[]) {

  std::cout << "enter two numbers: ";
  int x {};
  int y {};
  std::cin >> x >> y;
  std::cout << x << " + " << y << " = " << x + y << std::endl;

  return 0;
}
