#include<iostream>
#include<fstream>
using namespace std;
int main()
{

char name[20];

cout<<endl<<"Enter the name of the file  (no longer than 20 characters): ";
cin>>name;

int size;
cout<<endl<<"Enter the size of the word to compress : ";
cin>>size;



char data[size];
fstream input(name);

for(int i = 0;i<size;i++)
{
    input>>data[i];
}

char temp = data[0];
int i = 1;
int counter = 1;
char compressed[size];
int k = 0;

while(true)
{
    if(data[i]==temp)
    counter++;
    else
    {
        compressed[k] = temp;
        k++;
        if(counter>1)
        {compressed[k] = counter + '0';
        k++;}

        counter = 1;
        temp = data[i];
        
    }

    i++;

    if(i==size)
    {if(data[i]==temp)
    counter++;
    else
    {
        compressed[k] = temp;
        k++;
        if(counter>1)
        {compressed[k] = counter + '0';
        k++;}

        counter = 1;
        temp = data[i];
        
    }
    break;
    }
}


for(int i = 0;i<k;i++)
{
    cout<<compressed[i];
}

fstream Out(name);
for(int i = 0;i<k;i++)
{
    Out<<compressed[i];
}




    return 0;
}