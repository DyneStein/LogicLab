#include <iostream>
using namespace std;
int main() {
    
    char SameNames[10][10];
    
    //inputting the names for different people
    char name[10][10];
    cout<<"Enter names : "<<endl;
    for(int i = 0;i<10;i++)
    {
        cin>>name[i];
    }
    
    int z = 0;
    for(int i = 0;i<9;i++)
    {
                //counting the length of the specific number.
                int length = 0;
                while(name[i][length]!='\0')
                {
                    length++;
                }
                length--;
                
                for(int h = i+1;h<10;h++)
                {
                    int counter = 0;
                    while(name[i][counter]!='\0' && name[h][counter]!='\0')
                    {
                       if((name[i][counter]==name[h][counter]) || (name[i][counter]+32==name[h][counter]) || (name[i][counter]-32==name[h][counter]) || (name[i][counter]==name[h][counter]+32) || (name[i][counter]==name[h][counter]-32))
                        counter++; 
                        else
                        {
                            counter = 0;
                            break;
                        }
  
                    }
                    
                    counter--;
                    if(counter==length)
                    {
                        int g = 0;
                        while(name[i][g]!='\0')
                        {
                         SameNames[z][g] = name[i][g];
                         g++;   
                        }
                        SameNames[z][g] = '\0';
                        z++;
                        break;
                        
                    }
                }
    }
    
    
    
cout<<endl<<"Same names are :: "<<endl;
for(int i = 0;i<=z;i++)
{
    cout<<SameNames[i];
    cout<<endl;
}

    return 0;
}