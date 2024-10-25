// 21. Write a C++ program to convert temperature in Fahrenheit to Celsius. 
#include <iostream>


int main (int argc, char *argv[]) {
  
  std::cout << "current temperature in Fahrenheit: ";
  float t {};
  std::cin >> t;
  std::cout << "current temperature in Celsius: " << 5.0 / 9 * (t - 32) << std::endl;
  return 0;
}
