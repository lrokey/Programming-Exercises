// The country A has 50M inhabitants, and its population grows 3% per year. 
// The country B, 70M and grows 2% per year. 
// How many years A will surpass B?

#include <iostream>
#include <string>

using namespace std;
int main()
{
    double growthRateA = 0.03;
    double growthRateB = 0.02;
    int startPopA = 50;
    int startPopB = 70;
    int years = 1;
    int finalPopA;
    int finalPopB;
    
    do{
        finalPopA = (startPopA*growthRateA)+startPopA;
        startPopA = finalPopA;
        finalPopB = (startPopB*growthRateB)+startPopB;
        startPopB = finalPopB;
        years++;
    }while(finalPopA < finalPopB);
    cout << "Years: " << years << endl;
    return 0;
}
