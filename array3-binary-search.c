#include<stdio.h>
int main(){

    int length;
    printf("Enter the Length of array :");
    scanf("%d",&length);

    int arr[length];

    printf("Enter The Value Of Array :");
    for (int i=0; i<length; i++)
    {
        scanf("%d",&arr[i]);
    }
    length=sizeof(arr)/sizeof(arr[0]);

    int key;
    printf("Enter the Key :");
    scanf("%d",&key);
    
    int start=0, end=length-1;
    int index=-1;
    while (start<=end)
    {
        int mid= (start+end)/2;
        if (arr[mid]==key)
        {
            index=mid;
            break;
        }
        else if (arr[mid]<=key)
        {
            start=mid+1;
        }
        else if (arr[mid]>=key)
        {
            end=mid-1;
        }
    }

    if (index!=-1)
    {
        printf("Key Found At Index %d",index);
    }
    else{
        printf("Key Not Found!");
    }
    
    
}

//binary search -divide and con(means it divide first and find the midpoint for finding key )
//sorted