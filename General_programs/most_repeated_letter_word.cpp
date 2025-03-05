#include<iostream>
using namespace std;

int count_repetition_frequency(int start, int end,const  char* word)
{
	int max = 0, counter = 0;
	char save = word[start];
	
	while (start <= end)
	{

		if (word[start] == save)
			 counter++;
		else if (word[start] != save)
		{	
		    if(counter>max)
		    max = counter;
		    
		    save = word[start]; // very important 
		    counter = 1;            
		}

		start++;
		
	}
	
	if (counter > max)
        max = counter;
	return max;
}
	
int countRepeatedLetters(const char* word)
{
	int* ptr = new int[10]();
	int i = 0, array_varible = 0, most_repeated_word_initial_index = 0;
	int start = 0, end = 0;
	while (word[i-1<=0?0:i-1] != '\0')
	{

		if (word[i] == ' ' || word[i]=='\0')
		{
			end = i - 1;
			ptr[array_varible] = count_repetition_frequency(start, end,word);
		if (ptr[array_varible] > ptr[array_varible - 1 < 0 ? 0 : array_varible - 1])
	        most_repeated_word_initial_index = start;
				
			array_varible++;
			start = i + 1;
		}
		i++;
	}


    for (int j = most_repeated_word_initial_index; word[j] != ' ' && word[j] != '\0'; j++) {
        cout << word[j];
    }
	delete[] ptr;
	ptr = nullptr;
	
	return 0;
}


int main()
{
    
    const char* sentence = "this is the test whichh would check this program";
    countRepeatedLetters(sentence);
    
    return 0;
}

