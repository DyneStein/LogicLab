#include <iostream>
using namespace std;
int main() {
 
 int n;
 cout<<"Enter the number : ";
 cin>>n;
 
 for(int row = 0,col = 0,spaces = 0;row<n;)
 {
     
     if(spaces<n-row)
     {
         cout<<" ";
         spaces++;
     }
     else if(col<(2*row+1))
     {
         cout<<"*";
         col++;
     }
     else if(row<n)
     {
         col = 0;
         spaces = 0;
         cout<<endl;
         row++;
     }

 }
 
 
 int k = 1;
 for(int row = n-1,col = n+n-3,spaces = 0;row>0;)
 {
     
     if(spaces<=k)
     {
         cout<<" ";
         spaces++;
     }
     else if(col>0)
     {
         cout<<"*";
         col--;

     }
     else if(row>0)
     {
         cout<<endl;
         row--;
         col = 2*row-1;
         spaces = 0;
         k++;
         
     }

   
 }


    return 0;
}