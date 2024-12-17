#include <iostream>
using namespace std;

void digital_root(int n);
int main() {
    
    int num;
    cout<<"Enter the number : ";
    cin>>num;
    
    digital_root(num);
    
    

    return 0;
}

void digital_root(int n)
{
    int sum = 0;
    int last_digit;
    
    while(n)
    {
        last_digit = n%10;
        sum = sum + last_digit;
        n = n/10;
        
    }
    
    if(n==0 && sum/10)
    {
        digital_root(sum);
    }
    else 
    {
        cout<<"The digital root is : "<<sum;
    }
    
    
    
    
}