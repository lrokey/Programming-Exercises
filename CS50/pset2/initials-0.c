#include <stdio.h>
#include <cs50.h>
#include <ctype.h>

int main(void)
{
    //printf("Your name: ");
    string name = GetString();
    //string capName = "BUFFER";
    for (int i = 0; name[i] != '\0'; ++i) { 
        if (name[i] >= 'a' && name[i] <= 'z') {
            name[i] = name[i] - ('a' - 'A');
   }
}
    //string initials = "AAA";
    //printf("Your name is %s", name);
    //int k =0;
    int i = 0;
    //printing out the first letter
    //initials[i] = name[i];
   // while(name[k]!='\0'){
       // toupper(name[k]);
       // k++;
   // }
    printf("%c", name[i]);
    while (name[i]!='\0'){
    // go through the end of the string -- check if there is a space, and if there is, print the next char
    toupper(name[i]);
        if(name[i] == ' '){
            printf("%c",name[i+1]);
        }
        i++;
    }
    //toupper(initials);
    //printf(initials);
    printf("\n");
}
