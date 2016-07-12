#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("How many minutes is your shower?\n");
    int lengthOfShower = GetInt();
    int bottlesOfWater = lengthOfShower * 12;
    printf("Your %i minute-shower is using %i bottles of water\n", lengthOfShower, bottlesOfWater); 
}

