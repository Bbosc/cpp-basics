// 23. Write a program in C++ that converts kilometers per hour to miles per hour.
#include <iostream>


int main (int argc, char *argv[]) {
  
  std::cout << "speed in km/h: ";
  float s {};
  std::cin >> s;
  std::cout << "equivalent in mph: " << s * 0.621371 << std::endl;
  return 0;
}
