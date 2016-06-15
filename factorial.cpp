/* Problem 14:
Input: integer N
Output: N!

Date: 6/15/2016
Author: Laura Rokey
*/

#include <iostream>
using namespace std;

unsigned int factorial(unsigned int n);

int main()
{
    int N;
    cout << "Integer N, please: ";
    cin >> N;
    cout << "Factorial of " << N << " is: " << factorial(N) << endl;
    return 0;
}

unsigned int factorial(unsigned int n){
    //break case
    if (n == 0){
        return 1;   
    }
    
    return n * factorial(n-1);
}
