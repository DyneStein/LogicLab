#include<iostream>
using namespace std;
int main()
{


int size;
cout<<"enter the size of the array : ";
cin>>size;

int array[size];
cout<<"Enter the array : ";
for(int i = 0;i<size;i++)
{
    cin>>array[i];
    
}

int i = 1;
int sumleft = 0;
int sumright = 0;

while(i<(size*size))
{

    int j = i-1;
    int k = i+1;
    
    while(j>=0)
    {
        
      sumleft+=(array[j]);
       j--; 
    }

    while(k<size)
    {
        sumright+=(array[k]);
        k++;
    }

if(sumleft==sumright)
{
  cout<<endl<<"The index is "<<i<<"th .";
  break;
}
else 
{
    sumleft = 0;
    sumright = 0;
}


    i++;
    
}

    return 0;
}