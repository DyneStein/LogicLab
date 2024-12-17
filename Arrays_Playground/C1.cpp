/*
  
   input matrix ::::  1 2 3 
                      4 5 6 
                      7 8 9
                      
this program would print its boundary in clockwise direction and then it would print 
its principle diagonal alongside the other one as well.
 
    output :: 12369874 (boundary)
              159 (principle diagonal)
              357 (other diagonal)

*/
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
bool restrictor = false; // this would restrict the control from going to the middle places (which are also not present in the data array)
bool limiter = true; // this would take care of the conditions. The use will elaborate more


int data[2][size*size];
data[0][0] = 0;
data[1][0] = 0;

while(k<(size*size))
{

if(j+1<size && j+1!=data[1][k-1] && limiter)
{
    data[0][k] = i;
    data[1][k] = j;
    cout<<matrix[i][j];
    j++;
}
else if(i+1<size && i+1!=data[0][k-1] && limiter)
{
    data[0][k] = i;
    data[1][k] = j;
    cout<<matrix[i][j];
    i++;
}
else if(j-1>=0 && j-1!=data[1][k-1] && limiter)
{
    data[0][k] = i;
    data[1][k] = j;
    cout<<matrix[i][j];
    j--;
}
else if(i-1>=0 && i-1!=data[0][k-1] && limiter)
{
    data[0][k] = i;
    data[1][k] = j;
    cout<<matrix[i][j];
    i--;
    restrictor = true;
    limiter = false;
}


// below is the condition for the first column when the control would backtrack from the bottom in order to restrain it from going into the mid spaces, I used bool
if(restrictor)
{
    if(i-1!=-1)
    {
        cout<<matrix[i][j];
        i--;
    }
    else{
    break;
    }
}


k++;
}

cout<<endl;
//printing of the principle diagonal
k=0;
i=0;
j=0;
while(k<size)
{
    cout<<matrix[i][j];
i+1<size?i++:i;
j+1<size?j++:j;

    k++;
}



cout<<endl;
//printing of the non-principle diagonal
k = 0;
i = 0;
j = size-1;
while(k<size)
{

cout<<matrix[i][j];
i+1<size?i++:i;
j-1>=0?j--:j;
    k++;
}












    return 0;
}