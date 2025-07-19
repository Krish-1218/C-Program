#include<stdio.h>
int main(){
    int r,c;
    for (r=1;r<=6;r++)
    {
        for (int s=5;s>=r;s--)
        {
            printf(" ");
        }
        for (c=1;c<=r;c++)
        {
            printf("*");
        }
        printf("\n");
    }
    
}