#include <iostream>

int main() 
{
  int myData[10];
  int indexI;
  int newValue;

  for(int i=0; i<10; i++)
    {
      myData[i]=1;
    }
  
  do {

    for(int i=0; i<10; i++)
      {
        std::cout<<myData[i]<<" ";
      }
    
      std::cout<<"\n";
      std::cout<<"    \n"; 
    
      std::cout<<"Enter an index: ";
      std::cin>>indexI;
      std::cout<<"Enter a new value: ";
      std::cin>>newValue; 

      std::cout<<"    \n";

      if(indexI >= 0 && indexI < 10)
      {
        myData[indexI] = newValue;
      }
      else
      {
        std::cout<<"The index is out of range\n"; 
      }
    
    } while(indexI >= 0 && indexI < 10);

  return 0;
}