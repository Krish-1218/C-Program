#include<stdio.h>
int main(){

    char ch;

    printf("Enter any character : ");
    scanf("%c",&ch);

    printf("\n ascii value for %c is %d \n ",ch,ch);

    if ((ch>=65) && (ch<98))
    {
        printf("It's a capital character ");
    }

    else if ((ch>=97) && (ch<=122))
    {
        printf("It's a small character ");
    }

    else if ((ch>=48) && (ch<=57))
    {
        printf("It's a Number");
    }

    else{
        printf("It's a other character");
    }
    return 0;

}