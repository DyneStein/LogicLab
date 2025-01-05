#include <iostream>
using namespace std;
int main() {
    
    int row, col;
    cout<<"Enter the size of the rows : ";
    cin>>row;
    cout<<"Enter the size of colummns : ";
    cin>>col;
    
cout<<"Enter the elements : "<<endl;
int **array = new int*[row];
for(int i = 0;i<row;i++)
{
    array[i] = new int[col];
    for(int j = 0;j<col;j++)
    {
        cin>>array[i][j];
    }
}



int **main_array = nullptr;

int k = 0;
int t = 0;


for(int i = 0;i<row;i++)
{
    
for(int j = 0;j<col;j++)
{

    if(array[i][j]!=0)
    {
        int **Arr = new int*[t+1];
        for(int i = 0;i<t;i++)
        {
            Arr[i] = main_array[i];
        }
        Arr[t] = new int[3];
        
        Arr[t][0] = i;
        Arr[t][1] = j;
        Arr[t][2] = array[i][j];
        
        
        delete[] main_array;
        main_array = Arr;
        
        Arr = nullptr;
        
        t++; }
        
}
        
}
        


cout<<endl<<endl<<"The sparse matrix is : "<<endl;
for(int i = 0;i<t;i++)
{
    for(int j = 0;j<3;j++)
    {
        cout<<main_array[i][j]<<" ";
    }
    cout<<endl;
}







for(int i = 0;i<t;i++)
{
    delete[] main_array[i];
}
delete[] main_array;
main_array = nullptr;


//++X(11) + (10)X++ - ++X(11) - --X(11)

for(int i = 0;i<row;i++)
{
    delete[] array[i];
}
delete[] array;
array = nullptr;
    
    
    
    
    return 0;
}