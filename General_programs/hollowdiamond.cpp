#include <iostream>
using namespace std;
int main() {
 
 int n;
 cout<<"Enter the number : ";
 cin>>n;
 
 
 for(int row=0,lcol=0,rcol = 0,lspaces=0,rspaces=0;row<n;)
 {
     if(lcol<n-row)
     {
         cout<<"*";
         lcol++;
     }
     else if(lspaces<row)
     {
         cout<<" ";
         lspaces++;
         
     }
     else if(rspaces<row)
     {
         cout<<" ";
         rspaces++;
         
     }
     else if(rcol<n-row)
     {
         cout<<"*";
         rcol++;
         
         
     }
     else if(row<n)
     {
         cout<<endl;
         row++;
         lcol = 0;
         lspaces = 0;
         rspaces = 0;
         rcol = 0;
         
     }
  
 }
 
 
 for(int row=0,lcol=0,rcol = 0,lspaces=0,rspaces=0;row<n;)
 {
     if(lcol<=row)
     {
         cout<<"*";
         lcol++;
     }
     else if(lspaces<n-row-1)
     {
         cout<<" ";
         lspaces++;
         
     }
     else if(rspaces<n-row-1)
     {
         cout<<" ";
         rspaces++;
         
     }
     else if(rcol<=row)
     {
         cout<<"*";
         rcol++;
         
         
     }
     else if(row<n)
     {
         cout<<endl;
         row++;
         lcol = 0;
         lspaces = 0;
         rspaces = 0;
         rcol = 0;
         
     }
  
 } 

    return 0;
}