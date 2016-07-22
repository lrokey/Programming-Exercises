#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>


int main(int argc, string argv[]){
    if (argc == 2){
        int k = atoi(argv[1]);
        //printf("k is: %d", k);
        //printf("\nYour phrase to code: ");
        string phrase = GetString();
        int n = strlen(phrase);
        int result[n];
        //printf("You entered %s\n", phrase);
        for (int i = 0; i < n; ++i) { 
            if (isalpha(phrase[i])) {
                if(isupper(phrase[i])){
                    //do stuff
                    //printf("The ascii value of %c is %d\n",phrase[i], phrase[i]);
                    result[i] = ((phrase[i]-65)+k) % 26;
                    printf("%c",result[i]+65);
                }else if (islower(phrase[i])){
                    //do other stuff
                    //printf("The ascii value of %c is %d\n",phrase[i], phrase[i]);
                    result[i] = ((phrase[i]-97)+k) % 26;
                    printf("%c",result[i]+97);
                }else{
                    //do nothing..because if its alpha, it has to be either upper or lower case
                }
            }else{
                printf("%c", phrase[i]);
            }
        }
        printf("\n");
        //printf("hello, %s\n", argv[1]);
        return 0;
    }else{
        printf("BAD!\n");
        return 1;
    }
}
