#include <iostream>
using namespace std;
int main() {
    
    int size;
    cout<<"Enter the order of the matrix : ";
    cin>>size;
    
    
    int **array = new int*[size];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i = 0;i<size;i++)
    {
        array[i] = new int[size];
        for(int j = 0;j<size;j++)
        {
            cin>>array[i][j];
        }
    }
    
    
    int sum = 0;
    for(int i = size-1,j = size-1;i>=0;i--,j--)
    {
        sum+=(*(*(array+i)+j));
    }
    cout<<endl<<"Sum of principle diagonal is : "<<sum;
    
    
    sum = 0;
    for(int i = size-1,j = 0;i>=0;i--,j++)
    {
        sum+=(*(*(array+i)+j));
    }
    cout<<endl<<"Sum of other diagonal is : "<<sum;
    
   
    
    
    
    for(int i = 0;i<size;i++)
    {
        delete[] array[i];
    }
    delete[] array;
    array = nullptr;
    
    
    
    

    return 0;
}