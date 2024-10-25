//38. Write a C++ program that takes a number as input and prints its multiplication table up to 10. 
#include <iostream>

int main (int argc, char *argv[]) {
  std::cout << "enter an integer: ";
  int x {};
  std::cin >> x;
  for (size_t i = 0; i < 11; i++) {
    std::cout << x << " x " << i << " = " << x * i << '\n';
  }
  return 0;
}
