// 32. Write a program in C++ to check whether a number is positive, negative or zero. 
#include <iostream>


int main (int argc, char *argv[]) {
  std::cout << "number to observe: ";
  int x {};
  std::cin >> x;
  if (x > 0) {
    std::cout << "positive";
  } else if (x == 0) {
    std::cout << "zero";
  } else {
    std::cout << "negative";
  }
  return 0;
}
