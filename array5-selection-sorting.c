#include<stdio.h>
int main(){

    int arr[5]={1,3,2,5,4};

    printf("Unsorted Array : ");
    for (int i=0; i<5; i++)
    {
        printf("%d ",arr[i]);
    }
    
    printf("\n");

    for(int i=0; i<5-1; i++){
        int minindex=i;
       for (int j=i+1; j<5; j++)
        {
            if (arr[j]<arr[minindex])
            {
                minindex=j;
            }
             
        }
         int temp=arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
        
    }
     printf("Sorted Array : ");
        for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
   
}
  printf("\n");
}