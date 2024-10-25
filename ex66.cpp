// 66. Write a C++ program to add all the numbers from 1 to a given number. 
#include <iostream>


int main (int argc, char *argv[]) {
  
  std::cout << "sum numbers from 1 to : ";
  int x {};
  std::cin >> x;
  int sum {0};
  for (size_t i = 1; i <= x; i++) {
    sum += i;
  }
  std::cout << sum << std::endl;
  return 0;
}
