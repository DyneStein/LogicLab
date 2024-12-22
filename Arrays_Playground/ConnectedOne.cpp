#include <iostream>
using namespace std;
int main() {

int size;
cout<<"Enter the size of the array : ";
cin>>size;

int array[size][size];

cout<<"Enter the elements of the array : "<<endl;
for(int i = 0;i<size;i++)
{
    for(int j = 0;j<size;j++)
    {
        cin>>array[i][j];
    }
}

int sum = 0;
int sum1 = 0;
int temp = 0;
int temp1 = 0;

for(int i = 0;i<size;i++)
{
    for(int j = 0;j<size;j++)
    {
        if(array[i][j]==1)
        {
            int row = i;
            int column = j;
            sum+=array[i][j];
            int k = 0;
            while(k<(size*size))
            {
               if(array[row+1][column]==1)
               {row++;
                sum+=array[row][column];
               }
               else if(array[row][column+1]==1)
               {
                   column++;
                   sum+=array[row][column];
               }
               k++; 
            }
            
            if(sum>temp)
            {
                temp = sum;
            }
            
            sum = 0;
  
        }
        sum = 0;
        
    }
}

//----------------------------------------------
for(int i = (size-1);i>=0;i--)
{
    for(int j = (size-1);j>=0;j--)
    {
        if(array[i][j]==1)
        {
            int row = i;
            int column = j;
            sum1+=array[i][j];
            int k = 0;
            while(k<(size*size))
            {
               if(array[row+1][column]==1)
               {row++;
                sum1+=array[row][column];
               }
               else if(array[row][column-1]==1)
               {
                   column--;
                   sum1+=array[row][column];
               }
               k++; 
            }
            
            if(sum1>temp1)
            {
                temp1 = sum1;
            }
            
            sum1 = 0;
  
        }
        sum1 = 0;
        
    }
}


if(temp1>temp)
{
    cout<<endl<<temp1;
}
else
cout<<endl<<temp;

    return 0;
}