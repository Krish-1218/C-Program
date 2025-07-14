#include<stdio.h>
int main(){

    char ch;

    printf("\nEnter Any Character :");
    scanf("%c",&ch);

    switch (ch)
    {
     case 'a':
     case 'e':
     case 'i':
     case 'u':
     printf("It is small vowels");
         break;
    
     case 'A':
     case 'E':
     case 'I':
     case 'U':
     printf("It is capital vowel ");

    default:
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
         printf("%c is a consonant", ch);
        else{
            printf("Not a Char");
        }
    
        break;
    }

    return 0;
}