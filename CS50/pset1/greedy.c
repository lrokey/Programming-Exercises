#include <stdio.h> 
#include <cs50.h> int main(void)
{
    printf("O hai! How much change is owed?\n");
    int minCoins = 0;
    float change = GetFloat();
    while (change < 0)
    {
        printf("Retry: ");
        change = GetFloat();
    }
    //convert dollars to cents   int changeInCents = change*100;
    //printf("change in cents is %in", changeInCents);
    while (changeInCents > 0)
    {
        if (changeInCents >= 25)
        {
            changeInCents -= 25;
            minCoins++;
        }
        else if(changeInCents < 25 && changeInCents >= 10)
        {
            changeInCents -= 10;
            minCoins++;
        }
        else if(changeInCents < 10 && changeInCents >= 5)
        {
            changeInCents -= 5;
            minCoins++;
        }
        else
        {
            changeInCents -= 1;
            minCoins++;
        }
    }
    printf("%in", minCoins);
} 
