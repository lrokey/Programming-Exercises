#include <iostream>

using namespace std;

int main(){
	int testCases;
	cin >> testCases;
	int nCT, nLab, tCT, tLab, tCls;
	while(testCases--){
		cin >> nCT >> nLab >> tCT >> tLab >> tCls;
		int timeForCT = nCT * tCT;
		int timeForLab = nLab * tLab;
		if (24 - (timeForCT + timeForLab + tCls + 10) >=3 ){
		  cout << "Khushi";
		} else {
		  cout << "Hotash";
		}
		cout << endl;
	}
	return 0;
}
