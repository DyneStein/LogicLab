// This program will attempt to demosntrate the difference between taking inputs from the cin.getline and cin.
#include <iostream>
using namespace std;
int main() {

/*------------------USING CIN TO TAKE WHOLE WORD------------------------
-> Cin will take input until a key is pressed or spaces is encountered. 
-> It automatically appends the null character in the end (if there is space for null character in array)
-> if there is no space left for null character and array is full of input. No null character is overwritten or automatically added leaving the array !nullterminated which can cause several errors.
*/



/*
------------------USING CIN TO TAKE WORD AS LETTER BY LETTER (usually in a loop)------------------------ 
-> Cin will take input until a key is pressed or spaces is encountered. (it does not truncates input if you overflow it) 
-> It DOES NOT automatically appends the null character in the end (even if there is space for null character in array). You have to manually add null at the end (making its own space available)
-> if there is no space left for null character and array is full of input. No null character is overwritten or automatically added leaving the array !nullterminated which can cause several errors.
*/



/*
------------------USING CIN.GETLINE(ARRAY NAME , SIZE) TO TAKE INPUT (EITHER WORD OR SENTENCE)------------------------ 
-> Cin.getline will take input until a key is pressed (buffer is full.). (it truncates input if you overflow it).
-> It DOES automatically appends the null character in the end (even if there is no space for null character in array).
-> The buffer size is (size - 1). So it would take input until size-1 and at the end adding null character. Thus automatically creates the space for null character. 
*/







    return 0;
}