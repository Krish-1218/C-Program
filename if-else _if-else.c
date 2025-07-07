#include<stdio.h>
int main(){
    int Num;
    printf("Enter a number: ");
    scanf("%d",&Num);

    if (Num<0)
    {
        printf("Number is -ve ");
    }
    else if (Num>0)
    {
        printf("Number is +ve ");
    }
    else
    {
        printf("Number is zero");
    }

}