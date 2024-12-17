// encryption of password.
#include<iostream>
using namespace std;

int main()
{
int k = 0;
char password[13];
cout<<"Please enter the password : ";
cin.getline(password,13);

bool all_checks = false;
bool full_length = 1;

while(k<12)
{ 

    if(password[k]=='\0')
    {full_length = 0;
    break;}

k++;

}

if(!full_length)
{
    cout<<"Invalid Password. Length should be 12."<<endl;
    return 0;
}



// checking for the upper case letter inclusion.
k=0;
bool capital_check = false;
while(k<12)
{
    
    if(password[k]>='A' && password[k]<='Z')
    capital_check = true;

    k++;
}
if(!capital_check)
{
    cout<<"Invalid Password. Must include atleast one capital letter."<<endl;
    return 0;
}



// checking for the lower case letter inclusion.
k=0;
bool lower_check = false;
while(k<12)
{
    
    if(password[k]>='a' && password[k]<='z')
    lower_check = true;

    k++;
}
if(!lower_check)
{
    cout<<"Invalid Password. Must include atleast one lower letter."<<endl;
    return 0;
}


// checking for the number inclusion.
k=0;
int number_check = 0;
while(k<12)
{
    
    if(password[k]>='0' && password[k]<='9')
    number_check++;

    if(number_check==2){
    break;
    }

    k++;
}
if(number_check!=2)
{
    cout<<"Invalid Password. Must include atleast two numbers from 0 to 9."<<endl;
    return 0;
}


// checking for the special letter inclusion.
k=0;
int special_check = 0;
while(k<12)
{
    
    if(password[k]=='@' || password[k]=='&' || password[k]=='%' || password[k]=='^' || password[k]=='$' || password[k]=='#' || password[k]=='*' || password[k]=='!')
    special_check++;

    if(special_check==2){
    all_checks = true;
    break;
    }

    k++;
}
if(special_check!=2)
{
    cout<<"Invalid Password. Must include atleast two special characters."<<endl;
    return 0;
}

if(all_checks)
{
    cout<<"Congratulations ! you have entered correct password.";
}


   return 0;
}