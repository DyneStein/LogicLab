#include <iostream>
using namespace std;
int main() {
    
    string sentence;
    cout<<"Input the sentence : ";
    getline(cin,sentence);
    
    int temp = 0;
    int k = 0;
    while(sentence[k]!='\0')
    {
        if( (sentence[k]>=48 && sentence[k]<=57) && (sentence[k]-'0')>=temp)
        temp = sentence[k]-'0';
        k++;
    }
    //temp is the maximum digit.
    string NewString;
    k = 1;
    while(k<=temp)
    {
        
        int j = 0;
        while(sentence[j]!='\0')
        {
            if((sentence[j]-'0')==k)
            {
                int temp = j-1;
                while(sentence[temp]!=' ' && temp != -1)
                {
                    temp--;
                }
                temp++;
                while(temp<j)
                {
                    NewString+=sentence[temp];
                    temp++;
                }
                NewString+=' ';

            }
            j++;
        }
        

        k++;
    }
    

cout<<NewString;
 
 

    return 0;
}