#include<stdio.h>
int main(){

    int num=97;
    for (int r=1; r<=4; r++)
    {
        for (int s=5; s>=r; s-- )
        {
            printf(" ");
        }
        char ch='a';
        for (int c=1; c<=r*2-1; c++)
        {
            if (c<r)
            {
                printf("%c",ch);
                ch++;
            }
            else{
                printf("%c",ch);
                ch--;
            }
            
        }
        
        printf("\n");
    }
    
    for (int r=3; r>=1; r--)
    {
        for (int s=5; s>=r; s-- )
        {
            printf(" ");
        }
         char ch='a';
        for (int c=1; c<=r*2-1; c++)
        {
          if (c<r)
            {
                printf("%c",ch);
                ch++;
            }
            else{
                printf("%c",ch);
                ch--;
            }
        }
        
        printf("\n");
    }
}