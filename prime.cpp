// Program asks user to type in integer to check if it is prime. 
// If it is not prime, a list of its divisible numbers is provided.

#include <iostream>
#include <vector>

using namespace std;

void viewIntVector(vector<int> numbers);
void isPrime(int n, vector<int> divisibleNums);

int main()
{
    int numberToTest;
    vector<int> divisibleNumbers;
    cout << "Please enter a number: ";
    cin >> numberToTest;
    
    while (numberToTest <= 1){
        cout << "Negative integers can't be prime. Also, 0 and 1 are not prime numbers. Go again: ";
        cin >> numberToTest;
    }
    
    isPrime(numberToTest, divisibleNumbers);

    return 0;
}
void isPrime(int n, vector<int> divisibleNums){
    //cout << "INSIDE ISPRIME"<<endl;
    bool is_prime = true; //assume prime until proven otherwise.
    int i = 2; //counter variable
    while (i < n){
        //cout << "INSIDE WHILE LOOP." << endl;
        //cout << "i is: " << i << endl;
        //cout << "n is: " << n << endl;
        if (n%i==0){
            //cout << "Setting is_prime to FALSE!" << endl;
            is_prime = false;
            divisibleNums.push_back (i); //get list of divisible numbers
        }
        i++;   
    }
    if (is_prime){
        cout << "Your number is prime." << endl;
    }else{
        cout << "Your number is not prime -- it can be divided by ";
            viewIntVector(divisibleNums);
    }
}

void viewIntVector(vector<int> numbers){
    for(unsigned int i = 0; i < numbers.size(); ++i){
        cout << numbers[i] << ' ';   
    }
}
