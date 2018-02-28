#include <iostream>

using namespace std;

int main(){
	int testCases, size;
	cin >> testCases;
	while(testCases--){
		cin >> size;
		// while(size < 3 || size > 100){
		// 	cout << "Size is wrong. Try again: " << endl;
		// 	cin >> size;
		// }
		char grid[size][size]; // preallocate the grid
		for (int i = 0; i < size; ++i){
			for (int j = 0; j < size; ++j){	
				grid[i][j] = '.';
				cout << grid[i][j];
			}
			cout << endl;
		}
		cout << endl;
	}

	return 0;
}