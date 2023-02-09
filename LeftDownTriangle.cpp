#include<iostream>
using namespace std;
int main()
{
     //declare the size 
      int size=5; 
      //first loop which print pattern
      for(int i = 0; i < size; ++i) 
      {
     //second loop 0<5-0= 5 true so print * okay
    for(int j = 0; j < size-i; ++j) 
    {
     cout<<"*";
    }
     cout<<"\n"; 
      }    
return 0;
}