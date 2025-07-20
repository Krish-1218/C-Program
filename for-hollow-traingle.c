#include<stdio.h>
int main(){
    
    for (int i=1; i<=6; i++)
    {
        for (int s=6; s>=i; s--)
        {
            printf(" ");
        }
        for (int c=1; c<=i; c++)
        {
            if (i==6||c==1||c==i)
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