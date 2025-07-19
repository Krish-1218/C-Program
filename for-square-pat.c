#include<stdio.h>

int main(){
    int row ,column;
    printf("Enter your row and column");
    scanf("%d%d",&row,&column);

    for (int r=1;r<=row;r++)
    {
        for (int c=1;c<=column;c++)
        {
            printf("*\t");
        }
        printf("\n");
    }
    
}