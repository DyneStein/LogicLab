#include <iostream>
using namespace std;
int main() {
    
    int size;
    cout<<"Enter the size : ";
    cin>>size;
    
    int array[size];
    
    cout<<"Enter the array : "<<endl;
    for(int i = 0;i<size;i++)
    {
        cin>>array[i];
    }

    
    int k = 1;
    int r = 0;
    int sum = 0;
    int temp = -1000;
    
    int save_size;
    int save_initial_position;
    
    while(k<=(size-1))
    {
        
        while(r<=size-k)
        {
          for(int i = r;i<r+k;i++)
          {
              sum = sum + array[i];
              
          }
            
          if(sum>temp || (sum<0 && -(sum)<-(temp) ))
          {
              temp = sum;
              save_size = k;
              save_initial_position = array[r];
    
          }
          
            r++;
            sum = 0;
        }
        
      r=0;
      k++;
      sum = 0;
      
    }
    
    
    cout<<endl<<"The highest sum is : "<<temp;
    cout<<endl<<"The initial element of this submatrix is : "<<save_initial_position;
    cout<<endl<<"The size of the submatrix is :"<<save_size;

    return 0;
}