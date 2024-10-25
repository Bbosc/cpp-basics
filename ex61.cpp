// 61. Write a C++ program to swap the first and last digits of any number. 
#include <iostream>
#include <cmath>

int main (int argc, char *argv[]) {
  std::cout << "input a number: ";
  int x {};
  std::cin >> x;

  int digits { x ? static_cast<int>(log10(abs(x))) + 1 : 1};
  int first_digit = x % static_cast<int>(pow(10, 1));
  int last_digit = x / static_cast<int>(pow(10, digits-1));

  x -= first_digit;
  x += last_digit;
  x -= last_digit * pow(10, digits-1);
  x += first_digit * pow(10, digits-1);
  std::cout << "result after swapping: " << x << std::endl; 
  return 0;
}
