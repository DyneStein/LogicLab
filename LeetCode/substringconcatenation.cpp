#include <iostream>
using namespace std;

class Solution{
  private:
  
  
  public:
  
  bool checkmatch(char letter, char match_letter)
  {
      if(letter==match_letter)
      return true;
      
      return false;
  }
  
  bool check_NTC_index (int j , int* arr, int max)
  {
      
      for(int i = 0;i<max;i++)
      {
          if(j==arr[i])
          return false;
      }
      
      return true;
      
      
  }
  
  
  void SOL(string sentence, char * words , size_of_words)
  {
      
      int *not_to_check_index = nullptr;
      bool check = true;
      int index_save_sol;
      int _not_check_variable = 0;
      
      int i = 0;
      while(sentence[i]!='\0')
      {
          for(int j = 0;j<size_of_words;j++)
          {
          
          if(check_NTC_index(j,not_to_check_index, _not_check_variable))
          {
          
            if(checkmatch(sentence[i],words[j]))
            {
                
                int k = i;
                int word_variable = 0;
                while(words[word_variable]!='\0' && sentence[k]!='\0')
                {
                    if(sentence[k]!=words[word_variable])
                    {
                        check = false;
                        break;
                    }
                    
                    k++;
                    word_variable++;
                }
                
                if(check)
                {
                    not_to_check_index = new int[_not_check_variable+1];
                  not_to_check_index[_not_check_variable] = j;
                     j++;
                    check = true;
                    break;
                }
                
                
            }
            
            
                if(check)
                { index_save_sol = i; 
                  i = k-1;
                  check = true;
                  break;
                }
              
          }

          
          }
          
          i++;
      }
      
      
  }
  
  
};



int main() {
            
    
    return 0;
}