#include <iostream>
using namespace std;
//global variables
string ten[]={"ten","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
string unit[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

//functions declaration
string convertToWords(float currencyValue); // this is the main fucntion.
string numToword(int num);//this would convert the num input into string and return string.  this is used inside the convert number function.
string convertNumber(int num); //this would coonvert each part to english phrase used inside the main fucntion
int main() {
    
    
    float inputValue = 1234.67;
    string result = convertToWords(inputValue);
    cout<<"Input : "<<inputValue<<"\nOutput :"<<result;
    
 
 

    return 0;
}

string convertToWords(float currencyValue)
{

int Whole_part = static_cast<int>(currencyValue);
int Decimal_part = static_cast<int>(static_cast<float>(currencyValue-Whole_part)*100);

string wholeNumberWords = convertNumber(Whole_part);
string DecimalNumberWords = convertNumber(Decimal_part);
string result = wholeNumberWords + "Rupees and " + DecimalNumberWords + "Paisa";

return result;

}

string convertNumber(int num)
{

string value = numToword(num);

string Output;
int size = value.length();
int k = 0;
int t = 0;

switch(size)
{
    case 5:
    k = 0;
    while(k<size)
    {
        if(k==0)
        {
            int temp = value[0]-'0';
            for(int i = 0;i<8;i++)
            {
                if(temp-1==i)
                {
                    Output+=ten[i];
                    Output+=" ";
                    break;
                }
            }
        }
        else if(k==1)
        {
                int temp = value[1]-'0';
            for(int i = 0;i<10;i++)
            {
                if(temp-1==i)
                {
                    Output+=unit[i];
                    Output+=" Thousand ";
                    break;
                }
            }



        }
        else if(k==2)
        {

            int temp = value[2]-'0';
            for(int i = 0;i<10;i++)
            {
                if(temp-1==i)
                {
                    Output+=unit[i];
                    Output+=" ";
                    break;
                }
            }




        }
        else if(k==3)
        {

            int temp = value[3]-'0';
            for(int i = 0;i<8;i++)
            {
                if(temp-1==i)
                {
                    Output+=ten[i];
                    Output+=" ";

                    break;
                }
            }

        }
        else if(k==4)
        {

             int temp = value[4]-'0';
            for(int i = 0;i<10;i++)
            {
                if(temp-1==i)
                {
                    Output+=unit[i];
                    Output+=" Hundred";

                    break;
                }
            }


        }


    k++;
    }

    break;


    case 4:

    k = 0;
    while(k<size)
    {
        if(k==0)
        {
            int temp = value[0]-'0';
            for(int i = 0;i<10;i++)
            {
                if(temp-1==i)
                {
                    Output+=unit[i];
                    Output+=" Thousand ";
                    break;
                }
            }
        }
        else if(k==1)
        {
                int temp = value[1]-'0';
            for(int i = 0;i<10;i++)
            {
                if(temp-1==i)
                {
                    Output+=unit[i];
                    Output+=" ";
                    break;
                }
            }



        }
        else if(k==2)
        {

            int temp = value[2]-'0';
            for(int i = 0;i<8;i++)
            {
                if(temp-1==i)
                {
                    Output+=ten[i];
                    Output+=" ";
                    break;
                }
            }




        }
        else if(k==3)
        {

            int temp = value[3]-'0';
            for(int i = 0;i<10;i++)
            {
                if(temp-1==i)
                {
                    Output+=unit[i];
                    Output+=" Hundred";

                    break;
                }
            }

        }


    k++;
    }




    break;

    case 3:

    k = 0;
    while(k<size)
    {
        if(k==0)
        {
            int temp = value[0]-'0';
            for(int i = 0;i<10;i++)
            {
                if(temp-1==i)
                {
                    Output+=unit[i];
                    Output+=" ";
                    break;
                }
            }
        }
        else if(k==1)
        {
                int temp = value[1]-'0';
            for(int i = 0;i<8;i++)
            {
                if(temp-1==i)
                {
                    Output+=ten[i];
                    Output+=" ";
                    break;
                }
            }



        }
        else if(k==2)
        {

            int temp = value[2]-'0';
            for(int i = 0;i<10;i++)
            {
                if(temp-1==i)
                {
                    Output+=unit[i];
                    Output+=" Hundred";
                    break;
                }
            }




        }


    k++;
    }









    break;

    case 2:

k = 0;
    while(k<size)
    {
        if(k==0)
        {
            int temp = value[0]-'0';
            for(int i = 0;i<8;i++)
            {
                if(temp-1==i)
                {
                    Output+=ten[i];
                    Output+=" ";
                    break;
                }
            }
        }
        else if(k==1)
        {
                int temp = value[1]-'0';
            for(int i = 0;i<10;i++)
            {
                if(temp-1==i)
                {
                    Output+=unit[i];
                    Output+=" ";
                    break;
                }
            }
        }


    k++;
    }

    break;


    case 1:

    k = 0;
    while(k<size)
    {
        if(k==0)
        {
            int temp = value[0]-'0';
            for(int i = 0;i<10;i++)
            {
                if(temp-1==i)
                {
                    Output+=unit[i];
                    Output+=" ";
                    break;
                }
            }
        }
        
    k++;
    }

    break;


}


return Output;

}


string numToword(int num)
{

int backup = num;
int backup_number = num;
int power = 1;
int k = 0;
while(num)
{
    if(k!=0)
    power*=10;
    k++;
    num= num/10;
}
power= power/10;

num = backup;

string number = "";
while(num)
{
num = num/power;
number+=num;
int temp = num*power;
num = backup_number-temp;
backup_number = num;
power =  power/10;
}

return number;

}