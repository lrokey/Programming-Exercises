#include <iostream>
using namespace std;

int main (){
	int testCases;
	cin >> testCases;
	int numOfLines, numOfColumns;
	while(testCases){
		//cout << "Hello World!\n";
		cin >> numOfLines >> numOfColumns;
		for (int i = 0; i < numOfLines; i++){
			for (int j = 0; j < numOfColumns; j++){
				if (i == 0 || i == numOfLines-1){
					printf("*");
				}else if (j == 0 || j == numOfColumns-1){
					printf("*");
				}
				else {
					printf(".");
				}
			}
			printf("\n");
		}
		printf("\n");
		testCases--;
	}
	return 0;
}
