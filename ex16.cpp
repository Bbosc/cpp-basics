// 16. Write a C++ program that calculates the volume of a cylinder.
#include <iostream>
#include <cmath>



int main (int argc, char *argv[]) {

  std::cout << "radius of the cylinder ? ";
  double r{};
  std::cin >> r;
  std::cout << "heigth of the cylinder ? ";
  double h{};
  std::cin >> h;
  std::cout << "volume is : " << M_PI * pow(r, 2) * h << std::endl; 
  
  return 0;
}
