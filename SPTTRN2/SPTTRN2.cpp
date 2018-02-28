#include <iostream>

using namespace std;

int main(){
	int testCases, size;
	cin >> testCases;
	while(testCases > 0){
		cin >> size;
		while(size < 3 || size > 100){
			cout << "Size is wrong. Try again: " << endl;
			cin >> size;
		}

		int** ary = new int*[size];
		for(int i = 0; i < size; ++i){
			ary[i] = new int[size];
		}
	}

	return 0;
}