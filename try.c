#include<stdio.h>
int main(){

    for (int r=1; r<=5; r++)
    {
        for (int s=1; s<=r; s++)
        {
            printf(" ");
        }
        
        for (int j=5; j>=r; j--)
        {
            printf("* ");
        }
        printf("\n");
    }
    
}