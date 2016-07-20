#include <stdio.h>
#include <cs50.h>

int main(void)
{
    //printf("Your name: ");
    string name = GetString();
    for (int i = 0; name[i] != '\0'; ++i) { 
        if (name[i] >= 'a' && name[i] <= 'z') {
            name[i] = name[i] - ('a' - 'A');
   }
}
    int i = 0;
    printf("%c", name[i]);
    while (name[i]!='\0'){
    // go through the end of the string -- check if there is a space, and if there is, print the next char
        if(name[i] == ' '){
            printf("%c",name[i+1]);
        }
        i++;
    }
    printf("\n");
}
