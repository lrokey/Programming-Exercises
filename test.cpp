#include <iostream>

using namespace std;

int main(){
	void spiral(char array, int numRows, int numCols);
	void spiral(char array, int numRows, int numCols){
		top = 0;
		bottom = numRows - 1;
		left = 0;
		right = numCols - 1;
		dir = 0;
		while(left <= right && top <= bottom{
			if(dir == 0){
				for(int k = left; k <= right; k++){
					cout << array[top][k];
					top++;
				}
				dir = 1;
			}else if(dir == 1){
				for(int k = top; k <= bottom; k++){
					cout << array[k][right];
					right--
				}
				dir = 2;
			}else if(dir == 2){
				for (int k = right; k >= left; k--){
					cout << array[bottom][k];
					bottom--;
				} dir = 3;
			}else if (dir == 3){
				for (int k = bottom; k >= top; k--){
					cout << array[k][left];
					left++;
				}
				dir = 0;
			}
		})


	}

	char myArray[5][5];

	for ( int i = 0; i < 5; i++){
		for (int j = 0; j < 5; j++){
			myArray[i][j] = j;
		}
	}

	spiral(myArray, 5, 5);

	return 0;
}