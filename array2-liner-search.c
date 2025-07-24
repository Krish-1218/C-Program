#include<stdio.h>
int main(){
    int length;
    printf("Enter the Length of array :");
    scanf("%d",&length);
    int arr[length];

    printf("Enter the value of array :");
    for (int i=0; i<length; i++)
    {
        scanf("%d",&arr[i]);
    }
    length=sizeof(arr)/sizeof(arr[0]);
    int key, index=-1;
    printf("Enter a Key :");
    scanf("%d",&key);

    for (int i=0; i<length; i++)
    {
        if (arr[i]==key)
        {
            index=i;
            break;
        }
        
    }
    if (index!=-1)
    {
        printf("Key found at index %d",index);
    }
    else{
        printf("Key Not Found ");
    }
    
    

}