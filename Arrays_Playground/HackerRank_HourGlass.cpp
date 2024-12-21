#include <iostream>
using namespace std;
int main() {
    
    int array[6][6];
    cout<<"Enter the elements of the 6X6 matrix : "<<endl;
    for(int i = 0;i<6;i++)
    {
        for(int j = 0;j<6;j++)
        {
            cin>>array[i][j];
        }
    }
    
    
    int r = 0;
    int c = 0;
    int k = 3;
    int counter = 0;
    int sum = 0;
    int temp = sum;
    while(r<4)
    {
        
        
        
        while(c<4)
        {
            
            for(int i = r;i<r+k;i++)
            {
                for(int j = c;j<c+k;j++)
                {
                    if(counter!=3 && counter!=5)
                    {
                        sum = sum + array[i][j];
                    }
                    
                    counter++;
                }
            }
            
            if(sum>temp)
            {
                temp = sum;
            }

            c++;
            counter = 0;
            sum = 0;
        }

        r++;
        c = 0;
        counter = 0;
    }
    
    
    cout<<endl<<"The greatest sum of hourglass is : "<<temp;
    


    return 0;
}