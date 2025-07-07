#include<stdio.h>
int main() {
    int num1,num2;

    printf("Number 1 is : ");
    scanf("%d",&num1);

    printf("Number 2 is :");
    scanf("%d",&num2);

    if (num1>num2)
    {
       printf("Number 1 %d is Greater than Number2 ",num1);
    }
    else
    {
        printf("Number 2 %d is Greater than Number1 ",num2);
    }
}