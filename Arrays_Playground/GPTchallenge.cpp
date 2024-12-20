#include <iostream>
using namespace std;
int main() {
    
    
    int main_matrix_size;
    cout<<"Enter the size of the main matrix : "<<endl;
    cin>>main_matrix_size;
    
    int array[main_matrix_size][main_matrix_size];
    
    cout<<"Enter the elements of the matrix : "<<endl;
    for(int i = 0; i< main_matrix_size;i++)
    {
        for(int j = 0; j<main_matrix_size; j++)
        {
            cin>>array[i][j];
        }
        
        
    }
    
    int counter = 0;
    
    int k = 2;
    int temp = k;
    int r = 0;
    int c = 0;
    
    
    int save_x;
    int save_y;
    
    
    int counter_backup = 0;
    int limit = ((main_matrix_size-1)*(main_matrix_size-1))*0.75;
    
    while(k<(main_matrix_size))
    {

        while(r<=(main_matrix_size)-(k))
        {   

            while(c<=(main_matrix_size)-(k))
            {
                  
                for(int i = r;i<r+k;i++)
                {
                     
                    
                    for(int j = c;j<c+k;j++)
                    {
                        if(array[i][j]==1)
                        counter++;
                    }
                }
                
                
            
                if(counter>=limit && counter>counter_backup)
                {
                    save_x = r;
                    save_y = c;
                    temp = k;
                    counter_backup = counter;

                }

                
                counter = 0;
                c++;

                
                
            }
            
            
            c = 0;
            r++;
        }
        
        
        
        
        
        
        
        
        
        
        r = 0;
        c = 0;
        k++;
        counter = 0;
    }
    
    cout<<endl<<"The initial index of this sub-matrix is : "<<save_x<<","<<save_y;
    cout<<endl<<"The largest matrix of >75% 1 is : "<<temp;

    
    
    

    return 0;
}