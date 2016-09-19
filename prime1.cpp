#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

bool is_prime (const int& n, vector<int>& v);

int main() {
  int testCases, lowerLimit, upperLimit;
  cin >> testCases;
  vector<int> prime_array;
  
  // build the sieve
  for (int i=2; i<=100000; i++)
    if ( is_prime( i, prime_array ) ) 
        prime_array.push_back( i );
 
  while (testCases--) {
    cin >> lowerLimit >> upperLimit;
    if (lowerLimit < 2) lowerLimit = 2;
    //check for the prime numbers in the range.
    for (int i=lowerLimit; i<=upperLimit; i++)
      if ( is_prime( i, prime_array ) ) 
        cout << i << endl;
      cout << endl;
  }
  return 0;
}

bool is_prime (const int& n, std::vector<int>& v) {
  double root = sqrt (n);
  vector<int>::iterator it = v.begin();
  while ( it != v.end() && *it <= root ) {
    if (!( n % *it)) return 0;
    it++;
  }
  return 1;
}
 
