#include <iostream>
using namespace std;
int main() {
    
    int n;
    cout<<"Enter the number  : ";
    cin>>n;
    
    for(int row = 0,col = 0,spaces = 0;row<n;)
    {
        
        if(spaces<n-row)
        {
            cout<<" ";
            spaces++;
        }
        else if(col<2*row+1)
        {
            if(col<=(2*row+1)/2)
            cout<<(col+1);
            else
            cout<<2*(row+1)-(col+1);
            
            col++;
            
        }
        else if(row<n)
        {
            cout<<endl;
            row++;
            spaces = 0;
            col = 0;
            
        }
        
        
    }
    

  

    return 0;
}