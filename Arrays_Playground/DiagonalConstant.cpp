#include <iostream>
using namespace std;
int main() {
    
    int row, column;
    cout<<endl<<"Enter the row number : ";
    cin>>row;
    
    cout<<endl<<"Enter the column number : ";
    cin>>column;
    
    int array[row][column];
    
    cout<<endl<<"Enter the elements of the array : "<<endl;
    for(int i = 0;i<row;i++)
    {
        for(int j = 0;j<column;j++)
        {
            cin>>array[i][j]; 
        }
    }
    
    
    
    int r = row-1;
    int c = 0;
    
    int value = array[r][c];
       
        int R = r;
        int C = 0;
        
    while(r>=0)
    {
     
        if(r!=0){
        while(R+1<row)
        {
            R++;
            if(C+1<column)
            C++;
            
            if(array[R][C]!=value){
            cout<<"The matrix is not diagonal Constant.";
            return 0;
            }
        }
        
         r--; 
         R = r;
         C = 0;
        }
        
        
        
        
     
     
     
     if(r==0)
     {
         
         while(R+1<row)
        {
            R++;
            if(C+1<column)
            C++;
            
            if(array[R][C]!=value){
            cout<<"The matrix is not diagonal Constant.";
            return 0;
            }
        }
         
         r = 0;
         C++;
         
         
     }
     
     
    }
    
    
    
    cout<<"The matrix is diagonal constant.";
    


    return 0;
}