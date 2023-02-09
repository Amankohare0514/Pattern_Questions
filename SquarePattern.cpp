// Square pattern in C++
#include<iostream>
using namespace std;
int main()
{
 //first we have to give size 
 int size= 5;
     //outer loop
     for(int i = 0; i < size; ++i) 
     {
          //inner loop
          for(int i = 0; i < size; ++i) 
          {
               cout<<"*";
          }
          //close the line
          cout << "\n"; 
     }  
return 0;
}