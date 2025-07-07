#include<stdio.h>
int main(){

    int Number;
    printf("Enter a Number : ");
    scanf("%d",&Number);
if (Number==0)
{
    printf("Number is zero");
}

   else if (Number%2==0)
    {
        printf("Number Is Even ");
    }
    else{
        printf("Number is Odd");
    }
}