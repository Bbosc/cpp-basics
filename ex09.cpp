// 9. Write a C++ program to display the operation of pre and post increment and decrement. 
#include <iostream>


int main (int argc, char *argv[]) {
  

  std::cout << "enter an initial integer: ";
  int x {};
  std::cin >> x;
  std::cout << "result after post increment (i++): " << x++ << '\n';
  std::cout << "result after pre increment (i++): " << ++x << '\n';

  return 0;
}
