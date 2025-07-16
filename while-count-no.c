#include<stdio.h>
int main(){

    int num, count=0;

    printf("Enter a Number : ");
    scanf("%d",&num);

    while (num>0)
    {
        count++;
        num=num/10;
    }
    printf("Count of Number is : %d",count);
}