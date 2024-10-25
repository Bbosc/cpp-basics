// 30. Write a C++ program to compute the total and average of four numbers. 
#include <iostream>


int main (int argc, char *argv[]) {
  
  std::cout << "enter four integers: ";
  int a, b, c, d;
  std::cin >> a >> b >> c >> d;
  std::cout << "the average of the four is : " << (a + b + c + d)/4.0 << std::endl;

  return 0;
}
