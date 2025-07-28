#include<stdio.h>
int main(){

    int rows, col;
    printf("Enter the Rows and columns :");
    scanf("%d%d",&rows,&col);

   int arr1[rows][col];
   int arr2[rows][col];
   int sum[rows][col];

   printf("Enter the Values for Array1:\n");
   for (int i = 0; i < rows; i++)
   {
    for (int j = 0; j < col; j++)
    {
        scanf("%d",&arr1[i][j]);
    }
   }

   printf("Enter the Values for Array2:\n");
   for (int i = 0; i < rows; i++)
   {
    for (int j = 0; j < col; j++)
    {
        scanf("%d",&arr2[i][j]);
    }
   }
   
   for (int i = 0; i < rows; i++)
   {
    for (int j = 0; j < col; j++)
    {
      sum[i][j]=arr1[i][j]+arr2[i][j];
    }
        
    }
    printf("Sum Of Matrix: \n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
             printf("%d ", sum[i][j]);
        }
        printf("\n");
    
   }
}
   
    


