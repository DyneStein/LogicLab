#include <iostream>
using namespace std;
int main() {

string **Main_Array = nullptr;
int i = 0;
int input;
while(true)
{
    cout<<"Enter the 1 for continuation or 0 to exit."<<endl;
    cin>>input;
    
    
        
if(input){
    
        string **array = new string*[i+1];
        for(int j = 0;j<i;j++)
        {
            array[j] = Main_Array[j]; 
        }
        
        
        array[i] = new string[5];
        for(int k = 0;k<5;k++)
        {
            array[i][k] = "Dyen";
        }
        
        
        delete[] Main_Array;
        Main_Array = array;
        
        for(int t = 0;t<=i;t++)
        {
            for(int j = 0;j<5;j++)
            {
                cout<<Main_Array[t][j]<<" ";
            }
            cout<<endl;
        }
        
        array = nullptr;
        
}
else
{
    
    
for(int r = 0;r<i;r++)
{
    delete[] Main_Array[r];
}
delete[] Main_Array;
Main_Array = nullptr;

return 0;
    
}
 

    
    i++;
}
    


    return 0;
}