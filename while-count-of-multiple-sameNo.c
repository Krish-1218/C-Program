#include<stdio.h>
int main(){

    int num, count=0, sameNo;

    printf("Enter a Number : ");
    scanf("%d",&num);

    printf("Enter the Same Number to Count : ");
    scanf("%d",&sameNo);

    while (num>0)
    {
        int digit = num%10;
        if (digit==sameNo) {
            count++;
        }
        num = num/10;
    }
    
    printf("Count of %d  is : %d",sameNo, count);
}