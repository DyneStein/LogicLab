#include <iostream>
using namespace std;

int printSpaces(int spaces_limit, int counter  = 0)
{
    if(counter>spaces_limit)
    return 0;
    
    cout<<" ";
    
return printSpaces(spaces_limit,counter+1);
    
}

int printNumbers(int limit, int counter = 1, int number = 1, int incrementer = 0, bool half_check = false)
{
    if(counter>limit)
    return 0;
    
    if(counter==1)
    incrementer = limit-2;
    
    
    
   if(limit&1)
   {
       if(counter<=limit/2+1)
       {
           half_check = true;
           cout<<number<<"  ";
           //number+=something
       }
       else
       {
           number-=//something
           cout<<number<<"  ";
       
       }
   }
   else
   {
       if(counter==limit/2)
       {
           half_check = true;
       }
       //even
       cout<<number<<"  ";
   }
    
    //conditions
    if(counter==limit/2 && limit%2==0)
    return printNumbers(limit, counter+1, number, incrementer ,half_check);
    
    
    //even subtract 
    //odd add
    
    //half check conditions
    if(half_check==false)
    return printNumbers(limit, counter+1,incrementer+1, half_check);
    else
    return printNumbers(limit, counter+1,incrementer+1, half_check);
}


int printPattern(int row_size, int spaces,int sterik_limit = 1,  int counter = 1)
{
    
    if(counter>=row_size)
    return 0;
    
     printSpaces(spaces);
     printNumbers(sterik_limit); // for the sake of row counter to be zero
     else
     cout<<"1";
                            
     cout<<endl;        
     return printPattern(row_size, spaces-1, sterik_limit+1 ,counter+1);
}



int main() {

printPattern(7,7);

    return 0;
}