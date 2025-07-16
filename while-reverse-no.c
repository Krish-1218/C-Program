#include<stdio.h>
int main(){

    int num,reverse=0;

    printf("Enter a Number : ");
    scanf("%d",&num);

    while (num>0)
    {
        int digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
    }
    printf("Reversed Number is %d",reverse);
    
}