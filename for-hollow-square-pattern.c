#include<stdio.h>
int main(){

    for (int r=1; r<=4; r++)
    {
        for (int c=1; c<=4; c++)
        {
            if (r==1||c==1||r==4||c==4)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
    }
    
}