#include <iostream>
using namespace std;

void pattern(int waveLength, int waveHeight);

int main() {
    
pattern(8,11);

    return 0;
}

void pattern(int waveLength, int waveHeight)
{
    
    
    int R = waveLength;
    int C = waveHeight;
    
    int spaceCounter = 0;
    
    

    for(int i = 0;i<=(waveHeight/2);i++)
    {
        for(int h = 0;h<waveLength;h++)
        {
                        
                    for(int k = 0;k<i;k++)
                    {
                        cout<<" ";
                        
                    }
                    cout<<"*";
                    
                    if(i!=(waveHeight/2)){
                    for(int k = waveHeight-i;k>i+2;k--)
                    {
                        cout<<" ";
                    }
                    cout<<"*";}
                    
                    for(int k = 0;k<i;k++)
                    {
                        cout<<" ";
                    }
        
        }
        
        
        cout<<endl;
        
        
    }
//--------------------------------------------    
    int y = 0; 
    
    for(int i = (waveHeight/2);i>0;i--)
    {
     
        
        for(int h = 0;h<waveLength;h++)
       { 
           
        for(int j = 0;j<i-1;j++)
        {
            cout<<" ";
        }
        cout<<"*";
        
        for(int k = waveHeight-i ;k>i;k--)
        {
            cout<<" ";
            
        }
        cout<<"*";
        
        for(int t = 0;t<(C/2)-1-y;t++)
        {
            cout<<" ";
        }

    }
 
          y++;
 
        cout<<endl;
           
    }
    
}