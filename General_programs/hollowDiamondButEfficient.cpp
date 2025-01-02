#include <iostream>
using namespace std;
int main() {
 
 int n;
 cout<<"Enter the number : ";
 cin>>n;
 
 
 for(int row=0,col=0,spaces=0;row<n;)
 {
     if(col<n-row)
     {   if(row==0)
         cout<<"**";
         else
         cout<<"*";
         
         col++;
     }
     else if(spaces<row)
     {
         cout<<"  ";
         spaces++;
         if(spaces==row)
         col = 0;
         
     }
     else
     {
         cout<<endl;
         row++;
         col = 0;
         spaces = 0;
    
         
     }
  
 }
 
 
 for(int row=0,col=0,spaces=0;row<n;)
 {
     if(col<=row)
     {
         if(row==n-1)
         cout<<"**";
         else
         cout<<"*";
         
         col++;
     }
     else if(spaces<n-row-1)
     {
         cout<<"  ";
         spaces++;
         if(spaces==n-row-1)
         col = 0;
         
     }
     else
     {
         cout<<endl;
         row++;
         col = 0;
         spaces = 0;
         
     }
  
 } 

    return 0;
}