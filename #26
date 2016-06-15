/* Problem 26:
User inputs a sequence of characters. Each sequence is separated by a space. Then, the program will ask the user for
as search term (one char) and will output the maximum number of times it occured in the list of sequences.

Date: 6/15/2016
Author: Laura Rokey
*/
#include <iostream>
#include <string>
#include <vector>
#include <sstream>

using namespace std;
typedef vector<string> Sequence;
Sequence sequence;

int main()
{
    string sequences;
    string buffer;
    char searchChar;
    int max = 0;
    int temp = 0;
    
    cout << "Enter your text sequences separated by a space: ";
    getline (cin, sequences);
    stringstream ss(sequences);
    
    while (ss >> buffer){
        sequence.push_back(buffer);
    }
    
    cout << "Enter your search character: ";
    cin >> searchChar;
    cout<< "Searching for " << searchChar << endl;
   
  for(Sequence::size_type i = 0; i < sequence.size(); ++i){
      //cout << sequence[i] << " ";
      temp = 0;
      for(Sequence::size_type j = 0; j < sequence[i].size(); ++j){
        if (sequence[i][j] == searchChar){
            ++temp;   
        }
        if (max < temp){
            max = temp;   
        }
      }
  }
  cout << "Character " << searchChar << " appeared a maximum of " << max << " times." << endl;
  return 0;
}
