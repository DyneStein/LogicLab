#include<iostream>
#include<fstream>
using namespace std;

string name, username, password, email, filename;
int input;

void RegisterUser();
int MenuDisplay();
void LoginUser();
int PasswordChecker(string password);
int main()
{
     
     
     
while(true){ 
 cout<<endl;
     
switch(MenuDisplay())
{

		case 2 :
		RegisterUser();
		break;
		case 1 :
		LoginUser();
		break;
		case 0 :
		return 0;
		break;

}  
}

return 0;}
int MenuDisplay()
{
cout<<endl<<"Please select one of the following : "<<endl<<endl;
cout<<endl<<"2 for Registration.";
cout<<endl<<"1 for Login.";
cout<<endl<<"0 to Exit.";
cin>>input;

return input;
}

void RegisterUser()
{

    cout<<"Enter the name : "<<endl;
    cin>>name;
    cout<<"Enter the user-name : "<<endl;
    cin>>username;
    cout<<"Enter the password : "<<endl;
    cin>>password;
    while(!PasswordChecker(password))
    {
    cout<<endl<<"Enter the password please :";
    cin>>password; 
    }
    cout<<endl<<"Enter the email : ";
    cin>>email;
    
    filename = name + ".txt";
    ofstream OutFile(filename);
    
    OutFile<<name<<endl;
    OutFile<<username<<endl;
    OutFile<<password<<endl;
    OutFile<<email<<endl;


    cout<<endl<<"You are successfullly registered."<<endl;
    

}

int PasswordChecker(string password)
{
bool LengthCheck , CapitalAlphaCheck , LowerAplhaCheck, NumCheck, SpecialCheck;
int k = 0;
if(password.length()>8 ){
	LengthCheck=true;
	} 
	
if(LengthCheck){
	while(password[k]!='\0'){
	if(password[k]>='A' && password[k]<='Z')
	{
		CapitalAlphaCheck = true;
		k++;
		continue;
		
	}
	else if(password[k]>='a' && password[k]<='z')
	{
		LowerAplhaCheck = true;
		k++;
		continue;
	}
	else if(password[k]>='0' && password[k]<='9')
	{
		NumCheck = true;
		k++;
		continue;
	}
	else if(password[k]=='!' || password[k]=='@' || password[k]=='#' || password[k]=='$' || password[k]=='%' || password[k]=='^')
	{
		SpecialCheck = true;
		k++;
		continue;
	}
	
	}	
}
else
{
cout<<endl<<"Your passsword should be at least 8 characters long";
	return 0;
}




if(LengthCheck==1 && CapitalAlphaCheck==1 && LowerAplhaCheck==1 && NumCheck==1 && SpecialCheck==1)
{
return 1;
}
else
return 0;
}


void LoginUser()
{


cout<<endl<<"Enter the name : ";
cin>>name;

cout<<endl<<"Enter the password : ";
cin>>password;
while(!PasswordChecker(password))
    {
    cout<<endl<<"Enter the password please :";
    cin>>password; 
    }


cout<<endl<<"Enter the user name : ";
cin>>username;

filename = name + ".txt";

ifstream InFile(filename);

string File_name , File_password, File_username , File_email;
InFile>>File_name>>File_username>>File_password>>File_email;

if(File_name==name && File_password==password && File_username==username)
{
cout<<endl<<"User login successfull !";
name = File_name;
password = File_password;
username = File_username;
email = File_email;
cout<<endl<<"The details are as under :::"<<endl;
cout<<endl<<"name = "<<name;
cout<<endl<<"password = "<<password;
cout<<endl<<"username = "<<username;
cout<<endl<<"email = "<<email;


 }
else
{
cout<<endl<<"Credentials does not match correctly. Login Failed.";
}


}