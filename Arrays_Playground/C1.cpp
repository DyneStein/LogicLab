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

int j = 0;
int i = 0;
int k = 0;
bool restrictor = false;
bool go = true;


int data[2][size*size];
data[0][0] = 0;
data[1][0] = 0;

while(k<(size*size))
{

if(j+1<size && j+1!=data[1][k] && go)
{
    data[0][k] = i;
    data[1][k] = j;
    cout<<matrix[i][j];
    j++;
}
else if(i+1<size && i+1!=data[0][k] && go)
{
    data[0][k] = i;
    data[1][k] = j;
    cout<<matrix[i][j];
    i++;
}
else if(j-1>=0 && j-1!=data[1][k] && go)
{
    data[0][k] = i;
    data[1][k] = j;
    cout<<matrix[i][j];
    j--;
}
else if(i-1>=0 && i-1!=data[0][k] && go)
{
    data[0][k] = i;
    data[1][k] = j;
    cout<<matrix[i][j];
    i--;
    restrictor = true;
    go = false;
}



if(restrictor)
{
    if(j!=0 && i!=0)
    {
        cout<<matrix[i][j];
        j--;
    }
    else{
        return 0;
    }
}


k++;
}






    return 0;
}