#include<stdio.h>

int main(){
    int num=65;

    for (int r=1; r<=5; r++)
    {
        for (int c=1; c<=r; c++)
        {
            printf("%c ",num++);
        }
        
        printf("\n");
    }
    
}