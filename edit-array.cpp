
    // Create an array myData of 10 integers.
    // Fill all its cells with value 1 (using a for loop).
    // Print all elements of the array on the screen.
    // Ask the user to input the cell index i, and its new value v.
    // If the index i is within the array range (0 ≤ i < 10), update the asked cell, myData[i] = v, and go back to the step 3. Otherwise, if index i is out of range, the program exits.

#include <iostream>

int main(){
  int myData[10];
  std::cout << myData << std::endl;
  for(int i = 0; i < 10; i++)
  {
    std::cout << i << std::endl;
    myData[i] = 1;
  }
  std::cout << myData;
}