#include <iostream>
using namespace std;
void function(int *pointer);
void function2(int **pointer);

int main() {
    
    int array[3][3];
    cout<<"Enter the elements of array : "<<endl;
    for(int i =0;i<3;i++)
    {
        for(int j = 0;j<3;j++)
        {
            cin>>array[i][j];
        }
    }
    cout<<endl;
    
    int *ptr[3]; 
    for(int i = 0;i<3;i++)
    {
        ptr[i] = array[i];
    }
    
    
//     function(ptr[0]);
// cout<<endl<<endl<<endl;
//     function2(ptr);
    
    //*ptr = adrress of 0th index of i row
    //**ptr = value of address of oth index of i row
    
    // int **p[3];
    // for(int i = 0;i<3;i++)
    // {
    //     p[i]  = &ptr[i]; // this is correct this way but incorrect without & sign
    // }
    
    // cout<<(*(*(*(p+2))));
    
    // ptr[0] = address of array row
    // address of 0th row of ptr
    
    // int **p = ptr; // then why is this incorrect with & sign
    // cout<<(*(*(p+2))); 

    return 0;

}

void function( int *pointer )
{
    pointer+=1;////pointing towards the array 0th index addres
    cout<<pointer<<endl; // element of array
    // cout<<*(*pointer)<<endl;
}

void function2(int **pointer)
{
    
    cout<<pointer<<endl;//pointing towards the pointer array 0th index addres
    cout<<*pointer<<endl; //pointing towards the array 0th index addres
    cout<<*(*pointer)<<endl;
    
}


