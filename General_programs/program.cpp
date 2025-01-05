#include <iostream>
using namespace std;

void compress(string sentence);
int main()
{
    string Sentence_input;
    cout<<"enter the sentence : "<<endl;
    getline(cin,Sentence_input);
    compress(Sentence_input);
    return 0;
}

void compress(string sentence)
{
    int t=0;
    int counter=0;
    while(sentence[t]!='\0')
    {

        if(sentence[t+1]==' ' && sentence[t]==' ')
        counter++;

        t++;
    }

    int i = 0;
    bool alternate=true;
    while(sentence[i]!='\0')
    {
        
        if(sentence[i]==' ' && sentence[i]!='\0')
        {   int k = i+1;  
            int temp = i+1; // reallocate the data
            while(sentence[k]==' ')
            {  
                k++;
            }
            while(sentence[k]!=' ' &&  sentence[k]!='\0')
            {
                sentence[temp] = sentence[k];
                sentence[k]=' ';
                temp++;
                k++;
            }
        temp = i;
        }
    
    i++;
    }
    
    cout<<sentence<<endl;
    cout<<"Total spaces removed : "<<counter;
    
}