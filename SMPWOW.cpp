/*
  Basic SPOJ problem.
  This program asks user for a positive int < 50 and prints the word Woo...oooow based on the user input.
  Date: 9/7/2016
*/

#include <iostream>
using namespace std;

int main(){
	int n;
	cout << "Enter a positive integer less than 50: ";
	cin >> n;
	
	//some basic error checking...
	while(n < 0 || n > 50){
		cout << "N must be a POSITIVE integer LESS THAN 50. Try again!";
		cin >> n;
	}
	cout << "W";
	for(int i =0; i < n; i++){
		cout << "o";
	}
	cout << "w" << endl;
	return 0;
}
