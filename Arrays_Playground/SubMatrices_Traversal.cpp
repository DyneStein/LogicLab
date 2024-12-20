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
    
    int k;
    cout<<"enter the size of the sub matrix :";
    cin>>k;
    
    int sub_matrix_total_row = row - (k-1);
    int sub_matrix_total_column = column - (k-1);
    
    int total_sub_matrix = (sub_matrix_total_row)*(sub_matrix_total_column);
    
    
    int counter = 0;
    int r = 0;
    int c = 0;
    int white_cell = 0;
    
    while(r<(sub_matrix_total_row))
    {
        
        while(c<(sub_matrix_total_column))
        {
            
            for(int i = r;i<r+k;i++)
            {
                for(int j = c;j<c+k;j++)
                {
                    
                    if(array[i][j]==1)
                    counter++;
                }
            }
            
            if(counter>=((k*k)/2))
            {white_cell++; cout<<endl<<"The starting index of the "<<white_cell<<" white cell is : "<<r<<" "<<c;}
            
            c++;
            counter = 0;
        }
        
        
        r++;
        c=0;
    }


    return 0;
}