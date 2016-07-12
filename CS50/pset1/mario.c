#include <stdio.h>
#include <cs50.h>
int main(void)
{
    printf("Height: ");
    int height = GetInt();
    while (height > 23 || height <= 0)
    {
        printf("Retry: ");
        height = GetInt();
    }
    printf("YAY! Continuing on!...n");
    //building the pyramid from the bottom up..
    //outer loop controls the height
    for (int i = 0;
    i < height;
    i++)
    {
        //inner loops control the number of characters in each row
        for(int j = 0;
        j < height - i - 1;
        j++)
        {
            // this loop controls the number of spaces
            printf(" ");
        }
        for(int k = 0;
        k < i +2;
        k++)
        {
            // and this loop controls the number of hashmarks
            printf("#");
        }
        printf("n");
    }
} 
