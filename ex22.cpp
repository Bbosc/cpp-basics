// 22. Write a C++ program to find the third angle of a triangle. 
#include <iostream>


int main (int argc, char *argv[]) {
  
  std::cout << "first angle of the triangle: ";
  double a {};
  std::cin >> a;
  std::cout << "second angle of the triangle: ";
  double b {};
  std::cin >> b;

  std::cout << "the third angle of the triangle is : " << 180 - a - b << std::endl;
  return 0;
}
