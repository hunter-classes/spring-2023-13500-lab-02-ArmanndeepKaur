#include<iostream>
#include<cmath>

int main() 
{
  int num1, num2; 
  
  std::cout<< "Enter an integer: ";
  std::cin>>num1;

  if(num1<=0 || num1>=100)
  {
    std::cout<<"Re-enter an integer: "; 
    std::cin>>num2;
    num2 = pow(num2,2);
    std::cout<<"The number squared is: "<<num2<<"\n"; 
  }
    
  else
  {
    num1 = pow(num1,2);
    std::cout<<"The number squared is: "<<num1<<"\n";
  }

  return 0;
}