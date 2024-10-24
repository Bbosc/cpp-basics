// 17. Write a C++ program to find the Area and Perimeter of a Rectangle.
#include <iostream>
#include <cmath>



int main (int argc, char *argv[]) {

  std::cout << "width of the rectangle ? ";
  double w{};
  std::cin >> w;
  std::cout << "length of the rectangle ? ";
  double l{};
  std::cin >> l;
  std::cout << "perimeter is : " << 2 * (l + w) << std::endl; 
  std::cout << "area is : " << l * w << std::endl; 
  
  return 0;
}
