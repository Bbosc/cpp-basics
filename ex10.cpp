// 10. Write a C++ program to format the output. 
#include <iostream>
#include <iomanip>


int main (int argc, char *argv[]) {
  
  double pi {3.141592653};
  std::cout << "initial value: " << pi << '\n';
  std::cout << "with limited width of 2: " << std::fixed << std::setprecision(2) << pi << '\n';
  std::cout << "scientific format: " << std::scientific << pi << '\n';

  return 0;
}
