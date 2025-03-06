#include <iostream>
using namespace std;

// calculates the most repeated value of the array of input
int checkmode(int arr[], int size) {
    int element = arr[0];
    int save = element;
    int i = 0, counter = 0, max_count = 0;

    while (i < size) {
        if (arr[i] == element)
            counter++;
        else {
            if (counter > max_count) {
                max_count = counter;
                save = element;
            }
            counter = 1;
            element = arr[i];
        }
        i++;
    }

    if (counter > max_count) {
        max_count = counter;
        save = element;
    }

    return save;
}

// this would check the frequency of same numbers in the arrays to get rid of the edge cases before hand.
bool CheckArray(int first_array[],int second_array[], int size)
{   int temp = first_array[0]; 
    int i = 0; bool check = true;
    while(i<size)
    { 
        if(first_array[i]==temp)
        i++;
        else
        { check = false;  break;}
    }
    temp = second_array[0];
    if(!check)
    {  i = 0;
        while(i<size)
        {   if(second_array[i]==temp)
            i++;
            else
            return false;
        }
    }
    return true; // returning true if first_array has same elements or second array has same elements.
}

int check_frequency(int value, int array[], int size)
{
    int counter = 0;
    for(int i = 0;i<size;i++)
    {
        if(array[i]==value)
        counter++;
    }
    return counter;
}

int minDominoRotations(int first_array[], int second_array[], int size)
{
    int value1 = checkmode(first_array,size);
    int value2 = checkmode(second_array,size);
    
    int frequency1 = check_frequency(value1, first_array , size);
    int frequency2 = check_frequency(value2, second_array , size);
    
    int rotations1 = 0, rotations2 = 0; bool first_check = true , second_check = true;
    if(CheckArray(first_array, second_array, size))
    {
        return 0;
    }
    
    //frequency1>frequency2
    
        for(int i=0;i<size;i++)
        {
            if(first_array[i]!=value1)
            {
                if(second_array[i]==value1)
                {
                    rotations1++;
                }
                else
                {
                   rotations1 = 0;
                   first_check = false;  break;
                }
            }
        }
        
    //frequcny2>frequency1
        for(int i=0;i<size;i++)
        {
            if(second_array[i]!=value2)
            {
                if(first_array[i]==value2)
                {
                    rotations2++;
                }
                else
                {
                 rotations2 = 0;
                 second_check = false;  break;
                }
            }
        }
        
    if(!first_check && !second_check)
    return -1;
    else if(rotations1<rotations2 && rotations1!=0 && rotations2!=0)
    return rotations1;
    else if(rotations2<rotations1 && rotations1!=0 && rotations2!=0)
    return rotations2;
    else if(rotations1)
    return rotations1;
    else
    return rotations2;
   
    
}


void testCases() {
    int arr1_1[] = {2, 1, 2, 4, 2, 2};
    int arr2_1[] = {5, 2, 6, 2, 3, 2};
    int size1 = sizeof(arr1_1) / sizeof(arr1_1[0]);
    cout << "Test Case 1: " << minDominoRotations(arr1_1, arr2_1, size1) << " (Expected: 2)" << endl;

    int arr1_2[] = {3, 3, 3, 3, 3, 3};
    int arr2_2[] = {3, 3, 3, 3, 3, 3};
    int size2 = sizeof(arr1_2) / sizeof(arr1_2[0]);
    cout << "Test Case 2: " << minDominoRotations(arr1_2, arr2_2, size2) << " (Expected: 0)" << endl;

    int arr1_3[] = {1, 2, 1, 1, 1, 1};
    int arr2_3[] = {2, 1, 2, 2, 2, 2};
    int size3 = sizeof(arr1_3) / sizeof(arr1_3[0]);
    cout << "Test Case 3: " << minDominoRotations(arr1_3, arr2_3, size3) << " (Expected: 1)" << endl;

    int arr1_4[] = {1, 2, 3, 4, 5, 6};
    int arr2_4[] = {6, 5, 4, 3, 2, 1};
    int size4 = sizeof(arr1_4) / sizeof(arr1_4[0]);
    cout << "Test Case 4: " << minDominoRotations(arr1_4, arr2_4, size4) << " (Expected: -1)" << endl;
}


int main() {
    
    testCases();
    return 0;
}