#include <iostream>

int main(){
  int fib[60];
  int test = 0;
  fib[0] = 0;
  fib[1] = 1;
  int i = 2;
  while (i <60){
    fib[i] = fib[i-1] + fib[i-2];
    i = i + 1;

  }
  while (test <60){
        std::cout << fib[test] << std::endl;
    test = test + 1;
  }
}