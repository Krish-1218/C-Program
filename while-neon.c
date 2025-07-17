#include<stdio.h>
int main(){
    int num,add=0,square;

    printf("Enter a Number : ");
    scanf("%d",&num);

     square=num*num;

    while (square>0)
    {
        int digit=square%10;
        add=add+digit;
        square=square/10;
    }
    if (num==add)
    {
        printf("It's a Neon Number ");
    }
    else{
        printf("It's Not a Neon ");
    }
    
}