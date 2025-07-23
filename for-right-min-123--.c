#include<stdio.h>

int main(){

    int a ,b=4;

    for (int r=1; r<=5; r++)
    {
        a=r;
        b=4;
        for (int c=1; c<=r; c++)
        {
            printf("%d",a);
            a=a+b;
            b--;
        }
        
        printf("\n");
    }
    
}