#include <iostream>

using namespace std;

int main (){
	int testCases;
	cin >> testCases;
	int numOfLines, numOfColumns;
	while(testCases){
		//cout << "Hello World!\n";
		cin >> numOfLines >> numOfColumns;
		
		//height is 2, add 1 
		for (int i = 0; i < ((2+1) * numOfLines + 1); i++){
			for (int j = 0; j < ((2+1) * numOfColumns + 1); j++){
				if (j % (3) == 0 || i % (3) == 0){
					printf("*");
				}
				else {
					printf(".");
				}
			}
			cout << endl;
		}
		cout << endl;


		testCases--;
	}

	return 0;
}
