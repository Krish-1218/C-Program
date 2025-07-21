#include<stdio.h>
int main(){

    
    for (int r=6; r>=1; r--)
    {
        for (int s=5; s>=r; s-- )
        {
            printf(" ");
        }
        for (int c=1; c<=r*2-1; c++)
        {
            if (r==6||c==1||c==r*2-1)
            {
                printf("*");
            }
            else{
                printf(" ");
            } 
        }
        
        printf("\n");
    }

    for (int r=2; r<=6; r++)
    {
        for (int s=5; s>=r; s-- )
        {
            printf(" ");
        }
        for (int c=1; c<=r*2-1; c++)
        {
            if (r==6||c==1||c==r*2-1)
            {
                printf("*");
            }
            else{
                printf(" ");
            } 
        }
        
        printf("\n");
    }
    
    
}