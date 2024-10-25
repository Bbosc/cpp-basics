// 34. Write a C++ program to display the current date and time. 
#include <iostream>
#include <ctime>

int main (int argc, char *argv[]) {
  time_t current_date;
  time(&current_date);
  std::cout << "current date: " << ctime(&current_date) << std::endl ;
  return 0;
}
