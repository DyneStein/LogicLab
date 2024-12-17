//This is a program to demonstrate a specific reverse pattern of array
// for example ::
// input : hi dyen ;   output : ih neyd 
#include<iostream>
using namespace std;

char sentence[1000];
char reversed[1000];


// function to take input from the user
void TakeInput(char array[])
{
cout<<"Please input the sentence to reverse"<<endl;
cin.getline(sentence,1000);
}


//function to output the reversed array
void PrintOutput(char reversed[])
{ int i = 0;
while(reversed[i]!='\0')
{
    cout<<reversed[i];

    i++;
}
}


//main function that will reverse the array whilst keeping the reversed strings in their index
void SpecificReverse(char array[],char R[]);


int main()
{

    TakeInput(sentence);
    SpecificReverse(sentence,reversed);
    PrintOutput(reversed);

return 0;
}


void SpecificReverse(char A[],char R[])
{

    static int i = 0; // for the traversing of the main array
    static int j = 0; // for the traversing of the result array
    static int temp = -1; // for reference of previous space
    int k = 0; //inorder to traverse back 
    while(true)
    {       
            if(A[i]==' ')
            {   while(k!=temp)
                {
                    R[j] = A[k];
                    k--;
                    j++;
                }
                
                R[j] =' ';// assign space to the reversed array
                temp = i;
                j++;
            }

            i++;
            k = i-1; // because I do not want to include space this way. I am adding it manually.

            if(A[i]=='\0')
            {
                i--;
                k = i;
                // since we have to make reverse (go back) so i won't do it with 'i' instead we will use the k variable in order to not disturb the main traversing of the main array.
                while(k!=temp)
                {
                    R[j] = A[k];
                    k--;
                    j++;
                }                
                temp = i;

                cout<<endl;//just for console beauty ... LOL.
                break;
            }

    }




}


