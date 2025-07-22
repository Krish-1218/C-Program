#include<stdio.h>

int main(){

    for (int r=5; r>=1; r--)
    {
        for (int c=r; c>=1; c--)
        {
            printf("%d ",c);
        }
        
        printf("\n");
    }
    
}