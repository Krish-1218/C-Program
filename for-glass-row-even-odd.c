#include<stdio.h>
int main(){

    
    for (int r=4; r>=1; r--)
    {
        for (int s=5; s>=r; s-- )
        {
            printf(" ");
        }
        for (int c=1; c<=r*2-1; c++)
        {
            if (r%2==0)
            {
                printf("1");
            }
            else{
                printf("0");
            } 
        }
        
        printf("\n");
    }

    for (int r=2; r<=4; r++)
    {
        for (int s=5; s>=r; s-- )
        {
            printf(" ");
        }
        for (int c=1; c<=r*2-1; c++)
        {
            if (r%2==0)
            {
                printf("1");
            }
            else{
                printf("0");
            } 
        }
        
        printf("\n");
    }
    
    
}