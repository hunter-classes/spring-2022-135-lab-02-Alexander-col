#include <iostream>

// Write a program valid.cpp, which asks the user to input an integer in the range 0 < n < 100. If the number is out of range, the program should keep asking to re-enter until a valid number is input.
// After a valid value is obtained, print this number n squared.

int main(){
  int value;
  std::cout << "Please enter and integer: ";
  std::cin >> value;
  while (value <= 0  || value >= 100)
  {
      std::cout << "Please re-enter:" << std::endl;
      std::cin >> value;
  }
  int answer;
  answer = (value*value);
  std::cout << "Number squared is "<< answer << std::endl;
  return 0;
    }
