// 6. Write a C++ program that checks whether primitive values cross the limit. 
#include <iostream>
#include <climits>



int main (int argc, char *argv[]) {
  
  std::cout << "enter an integer: ";
  int x {};
  std::cin >> x;
  if (x > INT_MAX) {
    std::cout << "higher than integer limits" << std::endl;
    return EXIT_FAILURE;
  } else if (x < INT_MIN) {
    std::cout << "lower than integer limits" << std::endl;
    return EXIT_FAILURE;
  } else {
    return EXIT_SUCCESS;
  }
}
