#include<iostream>
using namespace std;
int main()
{
     //give size 
     int size=5;
     //our first loop which print our row
     for(int i = 0; i < size; ++i) 
     //our second loop inner loop which print our column
     {
          //0 equal or greter than 1 which is  not correct 
          for(int j = 0; j <= i; ++j)
          {
               cout<<"*";
          }
          cout<<"\n"; 
     }
return 0;
}