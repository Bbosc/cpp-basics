// 20. Write a C++ program to convert temperature in Celsius to Fahrenheit. 
#include <iostream>


int main (int argc, char *argv[]) {
  
  std::cout << "current temperature in celsius: ";
  float t {};
  std::cin >> t;
  std::cout << "current temperature in Fahrenheit: " << t*(9.0 / 5.0) + 32 << std::endl;
  return 0;
}
