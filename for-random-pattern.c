#include<stdio.h>

int main()
{
    for (int r=1; r<=11; r++)
    {
        for (int c=1; c<=11; c++)
        {
            if (r==1||r==11||c==1||c==11||r==11/2+1||c==11/2+1||c==r||c==12-r)
            {
                printf("* ");
            }
            else{
                printf("  ");
            }
            
        }
        

        printf("\n");
        
    }
    
}