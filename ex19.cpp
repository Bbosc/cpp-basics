// 19. Write a C++ program to find the area and circumference of a circle.
#include <iostream>
#include <cmath>



int main (int argc, char *argv[]) {

  std::cout << "radius of the circle ? ";
  double r{};
  std::cin >> r;
  std::cout << "circumference is : " << 2 * M_PI * r << std::endl; 
  std::cout << "area is : " << M_PI * pow(r, 2) << std::endl; 
  
  return 0;
}
