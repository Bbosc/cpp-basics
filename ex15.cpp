// 15. Write a C++ program that calculates the volume of a cube. 
#include <iostream>
#include <cmath>



int main (int argc, char *argv[]) {

  std::cout << "width of the cube ? ";
  double a{};
  std::cin >> a;
  std::cout << "volume is : " << pow(a, 3) << std::endl; 
  
  return 0;
}
