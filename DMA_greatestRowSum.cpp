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
    
    int index;
    int temp = -1;
    int sum = 0;
    for(int i = 0;i<size;i++)
    {
        for(int j = 0;j<size;j++)
        {
            sum+=(*(*(array+i)+j));
        }
        
        if(sum>temp)
        {   index = i;
            temp = sum;}
        
        sum = 0;
    }
    
    cout<<endl<<"The greatest sum is : "<<temp<<endl;
    cout<<"The index of the row is : "<<index<<endl;

    
    for(int i = 0;i<size;i++)
    {
        delete[] array[i];
    }
    delete[] array;
    array = nullptr;
    
    
    
    

    return 0;
}