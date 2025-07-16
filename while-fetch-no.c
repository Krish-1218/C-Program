#include<stdio.h>
int main(){

    int num;

    printf("Enter a Number : ");
    scanf("%d",&num);

    while (num>0)
    {
        int digit=num%10;
        printf("%d \n",digit);
        num=num/10;
    }
    
}