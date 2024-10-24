//12. Write a C++ program to add two numbers and accept them from the keyboard.
#include <iostream>

int main (int argc, char *argv[]) {

  std::cout << "enter two numbers: ";
  int x {};
  int y {};
  std::cin >> x >> y;
  std::cout << x << " + " << y << " = " << x + y << std::endl;

  return 0;
}
