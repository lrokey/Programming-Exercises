#include <iostream>
#include <string>
#include <vector>
//#include <typeinfo>

using namespace std;

int reverseInt(int num);

int main(){
	//cout << "Hello, world!" << endl;
	//cout << reverseInt(42) << endl;
	vector<int> solution;
	int a, b, c, revC;
	int testCases;
	//cout << "How many test cases? ";
	cin >> testCases;
	while(testCases > 0){
		cin >> a >> b;
		if(a < 0 || b < 0){
			return 0;
		}
		//cout << "A and B: " << a << " " << b << endl;
		c =  reverseInt(a) + reverseInt(b);
		revC = reverseInt(c);
		//int test = reverseInt(42);
		//cout << typeid(test).name()<<endl;
		//cout << revC << endl;
		solution.push_back(revC);
		testCases--;
	}
	for(int i = 0; i < solution.size(); ++i){
		cout << solution[i] << endl;
	}


	return 0;
}

int reverseInt(int num){
	// int i = 10;
	// int digit = 0;
	// string sdigit = "";
	// string digits ="";
	// int reversedNum = 0;
	// do{
	// 	digit = (num%i)/(i/10);
	// 	sdigit = to_string(digit);
	// 	digits = digits.append(sdigit);
	// 	i*=10;
	// }while((num*10)/i != 0);
	// reversedNum = stoi(digits);
	// return reversedNum;

	int y = 0;
	while (num> 0){
		y = y*10;
		y = y + (num % 10);
		num = num/10;
	}
	return y;
}
