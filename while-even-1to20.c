#include<stdio.h>
int main(){

    int n=2;
    int sum=0;

    while (n<=20)
    {
        printf("%d",n);
        sum=sum+n;
        n+=2;
    }
     printf("sum of even number is %d",sum);
    
}
