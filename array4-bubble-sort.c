#include<stdio.h>
int main(){

    int length;
    printf("Enter Length of Array :");
    scanf("%d",&length);

    int arr[length];
    printf("Enter the Value :");
    for (int i = 0; i < length; i++)
    {
        scanf("%d",&arr[i]);
    }
    
    printf("Unsorted Array : ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ",arr[i]);
    }
    
    printf("\n");

    for (int i=0; i<length; i++)
    {
        for (int j=0; j<length-i-1; j++)
        {
            if (arr[j]>arr[j+1])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
            
        }
        
    }
    printf("Sorted Array : ");
    for (int i = 0; i < length; i++)
    {
        printf("%d ",arr[i]);
    }
    
}