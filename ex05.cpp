// 5. Write a in C++ program to check the upper and lower limits of integers. 
#include <iostream>
#include <limits>


int main (int argc, char *argv[]) {
  
  std::cout << "maximum limit of int data type: " << std::numeric_limits<int>::max() << '\n'; 
  std::cout << "minimum limit of int data type: " << std::numeric_limits<int>::min() << '\n'; 
  return 0;
}
