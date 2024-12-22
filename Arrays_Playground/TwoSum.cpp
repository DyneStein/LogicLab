#include <iostream>
using namespace std;
int main() {
    
    
    int size;
    cin>>size;
    int number;
    cin>>number;
    int array[size];
    for(int i = 0;i<size;i++)
    {
        cin>>array[i];
    }
    
    int k = 0;
    int i;
    while(k<size)
    {
        

        for(i = k+1;i<size;i++)
        {
            if(array[k]+array[i]==number)
            {
                cout<<k<<","<<i;
                return 0;
            }
             
           
        }
        
        
        if(array[k]==number)
        {cout<<k;
            return 0;
        }
        
        
        k++;
    }
    

    return 0;
}