#include<stdio.h>
int main(){

    int row, col;
    printf("Enter the number of rows and columns: ");
    scanf("%d%d",&row,&col);

    int arr2[row][col];

    printf("Enter the Values for Array: ");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
             printf("%d ",arr2[i][j]);
        }
        printf("\n");
    }
    
    
}