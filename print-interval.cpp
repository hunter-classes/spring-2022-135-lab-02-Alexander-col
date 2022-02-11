#include <iostream>
//Write a program print-interval.cpp that asks the user to input 
// two integers L and U (representing the lower and upper limits of the interval), 
// and print out all integers in the range L ≤ i < U separated by spaces. 
// Notice that we include the lower limit, but exclude the upper limit.
int main()
{
  int L;
  int U;
  std::cout << "Input the value for L: ";
  std::cin >> L;
  std::cout << "Input the value for U: ";
  std::cin >> U;
  for(int i = L; i < U; i++){
    std::cout << i << " ";
  }
  std::cout << std::endl;

  return 0;
}