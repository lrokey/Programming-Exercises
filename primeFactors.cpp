#include <iostream>
#include <vector>

using namespace std;

int main(){
  int input;
  cin >> input;
  vector<int> factors;
  int y = 2;
  
  while(y*y <= input){
    if(input % y == 0){
      factors.push_back(y);
      input /= y;
    }else{
      y++;
    }
  }
  if(input > 1){
    factors.push_back(input);
  }
  
  //print the factors
  for (int i = 0; i < factors.size(); ++i){
    cout << factors[i] << " ";
  }
  cout << endl;
  return 0;
}
