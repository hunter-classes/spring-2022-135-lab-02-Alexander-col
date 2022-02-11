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
// When the funnction get to near the two billions the numbers become negative which I belive might have to do with memory size of a number. When I did an diffrent version of this code instead of having the array by and int I set it as double and the 60th term was 9.56722e+11 instead of -1055680967.