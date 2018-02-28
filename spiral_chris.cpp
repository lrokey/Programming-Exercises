#include <iostream>

using namespace std;


int main() {
	
	int arraysize;
	cin << arraysize;
	char array[arraysize][arraysize];

	for ( int i = 0; i < arraysize; i++){
		for (int j = 0; j < arraysize; j++){
			array[i][j] = '.';
		}
	}

	for ( int i = 0; i < arraysize; i++){
		array[i][0] = '*';
		array[i][arraysize - 1] = '*';
		array[arraysize - 1][i] = '*';
	}

	int xdir = 0;
	int xpos = 0;

	int ydir = -1;
	int ypos = arraysize - 1;
	
	bool iscenter = FALSE;

	while (!iscenter){
		if (array[xpos + 2 * xdir][ypos + 2 * ydir] == '*'){
			//turn right 
			}
		else if (array [xpos + xdir][ypos + ydir] == '.'){
			xpos = xpos + xdir;
			ypos = ypos + ydir;
			array[xpos][ypos] = '*';
			
		}
	}

	return 0;
}