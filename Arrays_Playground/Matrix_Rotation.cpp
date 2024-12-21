#include <iostream>
using namespace std;

int row,column;

void RotateArray(int **array, int row_size , int column_size);

int main() {
    
    cout<<"Enter the rows of the array : ";
    cin>>row;
    
    cout<<"Enter the columns of the array : ";
    cin>>column;
    
    int main_array[row][1000];
    cout<<"Enter the elements of the array : "<<endl;
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<column;j++)
        {
            cin>>main_array[i][j];
        }
    }
    
    int mid = row/2;
    
    int k = 0;
    
    while(k<mid)
    {
        int alternate = (row-1)-k;
        
        for(int j = 0;j<column;j++)
        {
            main_array[k][j] = (main_array[k][j] ^ main_array[alternate][j]);
            main_array[alternate][j] = (main_array[k][j] ^ main_array[alternate][j]);
            main_array[k][j] = (main_array[k][j] ^ main_array[alternate][j]);
        }
        k++;
    }
    
    int *ptr[row];
    
    for(int i = 0;i<row;i++)
    {
        ptr[i] = main_array[i];
    }
    

    RotateArray(ptr,row-1,column-1);
    
    cout<<"The result is : ";
    cout<<endl;
    
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<column;j++)
        {
            cout<<main_array[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}
void RotateArray(int **array, int row_size , int column_size)
{
    
    int T = row_size;
    int j = row_size;
    int K = 0;
    int J = 0;
    while(T>=0)
    {
        while(K<T)
        {
            
            *(*(array+T)+K) = ( (*(*(array+T)+K))  ^ (*(*(array+J)+(T)) ) );
            
            *(*(array+J)+(T))   = ( (*(*(array+T)+K))  ^ (*(*(array+J)+(T)) ) );
                        
            *(*(array+T)+K) = ( (*(*(array+T)+K))  ^ (*(*(array+J)+(T)) ) );
            
    
            
            K++;
            J++;
        }
        
        T--;
        K = 0;
        J=0;
    }
    
   
}
