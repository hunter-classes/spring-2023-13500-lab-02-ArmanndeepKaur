#include <iostream>

int main() 
{
  int fib[60];
  fib[0] = 0;
  fib[1] = 1;

  std::cout<<fib[0]<<"\n"<<fib[1]<<"\n";

  for(int i=2; i<60; i++)
    {
      fib[i] = fib[i-1] + fib[i-2];
      std::cout<<fib[i]<<"\n"; 
    }

  //once the sequence reached two billions, some of the numbers became negative. 
  
  return 0; 
}