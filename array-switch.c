#include<stdio.h>
int main(){

    int lenght; 
    int i;
    printf("Enter the lenght of array :");
    scanf("%d",&lenght);

    int arr[lenght];

    printf("Enter the value of array :");
    for (i=0; i<lenght; i++)
    {
        scanf("%d",&arr[i]);
    }

    printf("\n----------------------------------------------------------------------------------------------");
    
    int choice, sum=0,reverse=0,mul=1;
    printf("\n1.Sum-of-All-Elements\n2.Reverse-Order\n3.Even-Num\n4.Odd-Num\n5.Product-of-All-Num\n");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        for (i=0; i<lenght; i++)
    {
        sum=sum+arr[i];
    }
    printf("Add of all element is :%d",sum);
        break;

    case 2:
        printf("Array in reverse order: ");
        for (i = lenght - 1; i >= 0; i--)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");
        break;

     case 3:
     printf("Even Number is :");
       for (i=0; i<lenght; i++)
    {
         if (arr[i] % 2 == 0)
         {
            printf("%d ",arr[i]);
         }
    }       

    case 4:
     printf("Odd Number is :");
       for (i=0; i<lenght; i++)
    {
         if (arr[i] % 2 != 0)
         {
            printf("%d ",arr[i]);
         }
    } 

    case 5:
       for (i=0; i<lenght; i++){
        mul=mul*arr[i];
       }
    printf("Product of All Num :%d",mul);
    default:
        break;
    }
    
    
}