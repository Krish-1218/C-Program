#include<stdio.h>
int main(){

    char ch;

    printf("Enter any character : ");
    scanf("%c",&ch);
    printf("\n ascii value for %c is %d \n ",ch,ch);

    if ((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
    {
       printf("It's is Small vowel");
    }
    else if ((ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U'))
    {
        printf("It's is Capital vowel");
    }
    else if ((ch>=65)&&(ch<=98))
    {
        printf("It's is a Capital character");
    }
    else if ((ch>=97)&&(ch<=122))
    {
        printf("It's is a Small character");
    }
    else if ((ch>=48)&&(ch<=57))
    {
        printf("It,s is Number");
    }
    else{
        printf("It's is other Character");
    }
    
    
}