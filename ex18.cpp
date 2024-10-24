// 18. Write a C++ program to find the area of any triangle using Heron's formula.
#include <iostream>
#include <cmath>


double heronFormula(double a, double b, double c) 
{
  double s {(a + b + c)/2};
  return std::sqrt(s * (s-a)*(s-b)*(s-c));
}


int main (int argc, char *argv[]) {

  std::cout << "first side of the triangle ? ";
  double a{};
  std::cin >> a;
  std::cout << "second side of the triangle ? ";
  double b{};
  std::cin >> b;
  std::cout << "third side of the triangle ? ";
  double c{};
  std::cin >> c;

  std::cout << "area of the triangle: " << heronFormula(a, b, c) << std::endl;
  
  return 0;
}
