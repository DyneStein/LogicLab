#include <iostream>
using namespace std;
int main() {


int size;
cout<<"Enter the size of the matrix : ";
cin>>size;



int matrix[size][size];

cout<<endl<<"Enter the elements of the array : "<<endl;

for(int i = 0; i<size;i++)
{
    for(int j = 0;j<size;j++)
    {
        cin>>matrix[i][j];
    }
}

int k = 1;
cout<<matrix[0][0];
int j = 0;
int i = 0;

int data[2][size*size];
data[0][0] = 0;
data[1][0] = 0;

while( k<(size*size - 1) )
{

    


if(j+1<size &&  j+1 != data[1][k-2])
{ j++;
cout<<matrix[i][j];

data[1][k] = j;
data[0][k] = i;
}
else if(i+1<size && i+1 != data[0][k-2])
{
    i++;
    cout<<matrix[i][j];

data[1][k] = j;
data[0][k] = i;
}
else if(j-1>=0 && j-1 != data[1][k-2])
{
    j--;
    cout<<matrix[i][j];
data[1][k] = j;
data[0][k] = i;
}
else if(i-1>=0 && i-1 != data[0][k-2]) 
{
    i--;
    cout<<matrix[i][j];
    data[1][k] = j;
    data[0][k] = i;
}

    k++;
}










    return 0;
}