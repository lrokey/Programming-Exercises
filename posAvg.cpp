/*
Prob. 11
Input: User entered positive integers.
Output: Average
*/
#include <iostream>
#include <vector>
#include <numeric>
#include <iterator>

using namespace std;

void whatsInside(const vector<int> &numbers);
double computeAverage(vector<int> numbers);

int main()
{
    int userNum;
    vector<int> listOfNums;
    
    do{
        cout << "Enter your integer: ";
        cin >> userNum;
        if (userNum < 0){
            cout << "ERROR! Enter a positive number: ";
            cin >> userNum;
        }else{
            listOfNums.push_back(userNum);
        }
    }while(userNum != 0);
    cout << "The average for { ";
        whatsInside(&listOfNums);
    cout << "} is " << computeAverage(listOfNums) << endl;
    return 0;
}

void whatsInside(const vector<int> &numbers){
    copy(numbers.begin(), numbers.end(), ostream_iterator<int>(cout, " "));       
}

double computeAverage(vector<int> numbers){
    return accumulate(numbers.begin(), numbers.end(), 0.0)/numbers.size();
}
