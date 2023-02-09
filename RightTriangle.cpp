#include<iostream>
using namespace std;
int main()
{
     //give size
     int size=5;
     //first loop for pettern
     for(int i = 0; i < size; ++i) 
     {
          //THIS LOOP FOR SPACE
         //1<5-1= 4 it is true so print spACE
         for(int j = 1; j < size-1; ++j) 
         {
          cout<<" ";
         }
         //this loop for start
         //0<=0 it is true so it's print * okay
         for(int k = 0; k <= i; ++k) 
         {
          cout<<"*";
         }
          cout<<"\n"; 
     }
return 0;
}