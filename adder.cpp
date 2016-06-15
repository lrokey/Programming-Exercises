// Adds numbers
#include <iostream>
#include <string>
using namespace std;

int dumbGame(int num);

int userNum = 0;
int numOfTimes = 0;

int main()
{
    cout << "Hello, World!" << endl;
    cout << "SUM IS: " << dumbGame(userNum) << endl;
    return 0;
}

int dumbGame(int num){
    int sum = 0;
    cout << "How many numbers are you adding??";
    cin >> numOfTimes;
    for (int i =0; i <numOfTimes; i++){
        cout << "Enter integer number " << i << ": ";
        cin >> userNum;
        sum += userNum;
    }
    return sum;  
}
