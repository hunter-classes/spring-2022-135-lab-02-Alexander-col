#include <iostream>
#include "funcs.h"
//Write a program print-interval.cpp that asks the user to input 
// two integers L and U (representing the lower and upper limits of the interval), 
// and print out all integers in the range L ≤ i < U separated by spaces. 
// Notice that we include the lower limit, but exclude the upper limit.

void print_interval(int L, int U);
int main(){
  int L = 0;
  int U = 10;
  std::cout <<  "The value for L is : " << L << std::endl;
  std::cout << "The value for U is: "<< U << std::endl;
  print_interval(L,U);
  std::cout << std::endl;

  return 0;
}
