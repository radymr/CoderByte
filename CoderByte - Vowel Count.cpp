//Have the function VowelCount(str) take the str string parameter being passed and return the number of vowels the string contains (ie. "All cows eat grass" would return 5). Do not count y as a vowel for this challenge. 

#include <iostream>
using namespace std;

int VowelCount(string str) { 

  int ret = 0;
    for (int i = 0; i < str.length(); i++) {
      if (str[i] == 'A' || str[i] == 'E'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U'
         || str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i'|| str[i] == 'o'|| str[i] == 'u') {
          ret++;
  		}
	}
  return ret; 
            
}

int main() { 
  
  // keep this function call here
  cout << VowelCount(gets(stdin));
  return 0;
    
} 