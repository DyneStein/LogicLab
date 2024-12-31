#include <iostream>
#include<cstring>
using namespace std;

void ReplaceSubstring(string sentence , string find, string replace);
int main(){
    
    
  string Sen = "I am Pakistani so I support Pak-Indian Matches.";
  ReplaceSubstring(Sen,"Pak","Afghan");
  

    return 0;
}
void ReplaceSubstring(string sentence , string find, string replace)
{
    
    
    int k =0;
    while(sentence[k]!='\0')
    {
        if(sentence[k]==find[0])
        {
            int temp = k;
            int i = 0;
            string value;
            while(i<find.length())
            {
                value+=sentence[temp];
                if(sentence[temp]!=find[i])
                { break;}
                
                i++;
                temp++;
            }
            if(value==find && value.length()==replace.length())
            {
                i=0;
                while(k<temp)
                {   sentence[k]=replace[i];
                    i++;
                    k++;
                }
            }
            
            
    
        }
        
        k++;
    }
    
    
    cout<<endl<<sentence;
}