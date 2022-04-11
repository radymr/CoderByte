// ****************************************************************************
// 
// CoderByte Problem: 
// 
// Description:  Have the function SimpleAdding(num) add up all the numbers 
//    from 1 to num. For the test cases, the parameter num will be any number 
//    from 1 to 1000. 
// 
// ****************************************************************************

#include <iostream>

using namespace std;

int SimpleAdding(int num) { 

  int temp = 0;
  for ( int i = 0; i < num + 1; i++)
    temp = temp + i;
  return temp; 
            
}

int main() { 
  
  // keep this function call here
  cout << SimpleAdding(gets(stdin));
  return 0;
    
}           
