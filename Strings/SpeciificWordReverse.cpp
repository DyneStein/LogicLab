/* Question :: 
Write a C++ function “ScrambleWord” that changes the order of characters in a word in a given string. For changing
the order of letters, the simplest thing you could do is either sort the word in ascending or descending order.
For example, if the string given to the function is, “National University of Computer and Emerging Sciences”, and
the word to scramble is “Computer”, then the original string should change to,
“National University of Cemoprtu and Emerging Sciences”, if the word is sorted in ascending order.
*/


#include<iostream>
using namespace std;

char sentence[1000];
char altered[1000];

void takeinput();
void printarray();

int main()
{
takeinput();

//counting the number of words:
int j =0;
int wordCount=0;
while(sentence[j]!='\0')
{
    if(sentence[j]==' ' &&  sentence[j+1]!='\0')
    wordCount++;

    j++;
}

int ScrambleWordIndex = rand()%wordCount;

j = 0;
while(j)











printarray();

    return 0;
}

void takeinput()
{
    cout<<"please enter the string";
    cout<<endl;

    cin.getline(sentence,1000);
}

void printarray(){

int i =0;
while(altered[i]!='\0')
{
    cout<<altered[i];
}


}
