#include <iostream>
using namespace std;
int main() {
    
    string l1;
    cin>>l1;
    string l2;
    cin>>l2;
    
    int k = 0;
    int h = l1.length()-1;
    while(k<l1.length()/2)
    {
        l1[k] = l1[k]^l1[h];
        l1[h] = l1[k]^l1[h];
        l1[k] = l1[k]^l1[h];
        k++;
        h--;
    }
    
    
    k = 0;
    h = l2.length()-1;
    while(k<l2.length()/2)
    {
        l2[k] = l2[k]^l2[h];
        l2[h] = l2[k]^l2[h];
        l2[k] = l2[k]^l2[h];
        k++;
        h--;
    }

int i = 0;
k = 0;
int num1 = 0;
int j = 1;
for(int i  = 0;i<l1.length()-1;i++)
{
    j*=10;
}
while(i<l1.length())
{

int digit = l1[i]-'0';
num1+=digit*j;
j=j/10;

i++;}



i = 0;
k = 0;
int num2 = 0;
j = 1;
for(int i  = 0;i<l2.length()-1;i++)
{
    j*=10;
}
while(i<l2.length())
{

int digit = l2[i]-'0';
num2+=digit*j;
j=j/10;

i++;}

int result = num1+num2;
int backup = result;
int j = 0;
while(backup)
{
    j++;
    backup=backup/2;
}










    return 0;
}