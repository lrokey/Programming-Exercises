#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <numeric>

using namespace std;

int main(){
      int testCases = 0;
      int counter = 1;
      cout << "How many test cases?";
      cin >> testCases;
      while (testCases > 20 || testCases < 0){ 
        cout << "You must have between 0 and 20 test cases. Try again: "; 
        cin >> testCases; 
      } 
      while (testCases > 0){ 
          string input = ""; 
          cout << "Enter your input string: "; 
          cin >> input; 
          vector<int> myvector; 
          int total = 0; 
          cout << input << endl; 
          for (int i =0; i < input.size(); i++){ 
            int j = i + 1; 
            while (j < input.size()){ 
              if (input[i] == input[j]){ 
                input.erase(j, 1); }
              else{
                ++j;
              }
            }
            myvector.push_back(bitset<8>(input.c_str()[i]).to_ulong());
          }
        cout << input << endl;
        total = accumulate(myvector.begin(), myvector.end(), 0); cout << total << endl; cout << "#" << counter << " : " <<  bitset<8>(total)<<endl;
        counter++;
        testCases--;
        }
        return 0;
}
