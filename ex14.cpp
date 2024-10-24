// 14. Write a C++ program that calculates the volume of a sphere.
#include <iostream>
#include <cmath>



int main (int argc, char *argv[]) {

  std::cout << "radius of the sphere ? ";
  double r{};
  std::cin >> r;
  std::cout << "volume is : " << 4.0/3.0 * M_PI * pow(r, 3) << std::endl; 
  
  return 0;
}
