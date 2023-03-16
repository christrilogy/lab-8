// "Now is the time for all good men to come to the aid of their " 
// Inputting a 1 will use the word party. Any other number will use the word country. 


// Christian Morgan
#include <iostream> 
#include <string> 
using namespace std; 

// Fill in the prototype of the function writeProverb. 
void writeProverb( int );

int main () { 
  int wordCode; 
  cout << "Given the phrase:" << endl; 
  cout << "Now is the time for all good men to come to the aid of their   " << endl; 
  cout << "Input a 1 if you want the sentence to be finished with party" << endl; 
  cout << "Input any other number for the word country" << endl; 
  cout << "Please input your choice now" << endl; 
  cin >> wordCode; 
  cout << endl; 
  
  writeProverb(wordCode); 
  
  return 0; 
  
  } 

void writeProverb (int number)
{
  // Fill in the body of the function to accomplish what is described above
  cout << "Now is the time for all good men to come to the aid of their ";
  if ( number == 1 ) cout << "party.\n";
  else               cout << "country\n";
}
