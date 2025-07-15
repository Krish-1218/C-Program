#include<stdio.h>
int main(){
    int n,i;

    printf("Enter any number : ");
    scanf("%d",&n);
    i=1;

    while (i<=10)
    {
        printf("\n%d\t*\t%d\t=%d",n,i,n*i);
        i++;
    }
    
}