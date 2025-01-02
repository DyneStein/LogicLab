#include <iostream>
using namespace std;
int main() {
    
    int size;
    
    cout<<"Enter the size of the matrix : ";
    cin>>size;
    
    
    int matrix[size][size];
    
    for(int i = 0;i<size;i++)
    {
        for(int j = 0;j<size;j++)
        {
            cin>>matrix[i][j];
        }
    }
    
    int r = 0;
    int c = 0;
    
    
    int r_limiter = size-3;
    int c_limiter = size-3;
    
    int counter = 0;
    int sum = -1000;
    int k = 3;
    int temp = 0;
    while(r<=r_limiter)
    {
        
        while(c<=c_limiter)
        {
            
            for(int i = r;i<r+k;i++)
            {
                for(int j = c;j<c+k;j++)
                {
                    counter++;
                    if(counter!=4 && counter!=6)
                    sum+=matrix[i][j];
                    
                }
            }
            
            if(sum>temp)
            temp=sum;
            
            counter = 0;
            sum = 0;
            c++;
        }
        
        
        counter = 0;
        sum = 0;
        r++;
        c = 0;
    }
    
    
    
    
   cout<<endl<<endl<<temp; 
    
    


    return 0;
}