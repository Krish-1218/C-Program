#include<stdio.h>
int main(){

    int n, result=1;
    int i=1;

    printf("Enter Number for factorial : ");
    scanf("%d",&n);

    while (i<=n)
    {
        result=result*i;
        i++;
    }
    printf("Factorial of %d is %d",n,result);
    
}