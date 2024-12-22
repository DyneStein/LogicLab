#include <iostream>
#include<string>
using namespace std;
int main() {

string input;
cin>>input;

int k = 1;
    int c = 0;
    int backup[1000];
    int length = 0;
    int p = 0;
    int check_length = 0;
    int temp = -1000;
    int save_length;
    int save_index;
    
    
    while(k!='\0')
    {
        
        while(c<=(input.length())-k)
        {
            
            for(int i=c;i<=c+k;i++)
            {
                length++;
                backup[p] = input[i]; 
                p++;
            }
            p--;
             
            for(int j=c; j<=c+k;j++)
            {
                if(input[j]==backup[p])
                {check_length++; p--; }
                else
                break;
            }
            
            if(check_length == length && check_length>=temp)
            {
                temp = check_length; 
                save_length = k;
                save_index = c;
                
            }
            
            
            c++;
            p = 0;
            length = 0;
            check_length = 0;
        }
        
        
        
        k++;
        c = 0;
        p = 0;
        length = 0;
        check_length = 0;
        
        
                if(input[k]=='\0')
                {
                    cout<<"The palindromic string is : "<<endl;
                    for(int i = save_index;i<=save_index+save_length;i++)
                    {
                        cout<<input[i];
                    }
                    return 0;
                }


    }


    return 0;
}