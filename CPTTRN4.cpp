#include <iostream>

using namespace std;

int main (){
	int testCases;
	cin >> testCases;
	int numOfLines, numOfColumns, height, width;
	while(testCases){
		//cout << "Hello World!\n";
		cin >> numOfLines >> numOfColumns >> height >> width;
		//cout << numOfLines << numOfColumns << height << width << endl;
		
		for (int i = 0; i < ((height + 1) * numOfLines + 1); i++){
			for (int j = 0; j < ((width + 1) * numOfColumns + 1); j++){
				if (j % (width + 1) == 0 || i % (height + 1) == 0){
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
