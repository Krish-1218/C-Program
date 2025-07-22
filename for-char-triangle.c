#include<stdio.h>
int main(){

    int r, c ,s;
    int num=65;

    for (r=1; r<=5; r++)
    {
        for (s=5; s>=r; s--)
        {
            printf("  ");
        }
        for (c=1; c<=r*2-1; c++)
        {
         if (r == 5)
             printf("%c ", 'A' + (c - 1)); 
        else
             printf("%c ", 'A' + (c - 1) % 3); 
        }
        
        
        printf("\n");
    }
    
}