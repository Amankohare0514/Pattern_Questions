#include<iostream>
using namespace std;
int main()
{
     //give a size
     int size = 5;
     //first loop
     for(int i = 0; i < size; ++i) {
          //inner loop
          for(int j = 0; j < size; ++j) {
               //conditions
               if(i== 0 || i== size-1 ) 
               {
                    cout<<"*";
               }
               else
               if(j== 0 || j== size-1)
               {
                    cout<<"*";
               }
               else 
               {
                    cout<<" ";
               }
          }
          //break
          cout << "\n"; 
     }    
return 0;
}