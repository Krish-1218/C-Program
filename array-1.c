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
    
    printf("The value of array is :");
    for (i=0; i<lenght; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    
}