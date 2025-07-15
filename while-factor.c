#include<stdio.h>
int main(){
    int n,i=1;

    printf("Enter Any Number : ");
    scanf("%d",&n);

    while (i<n)
    {
        if (n%i==0)
        {
            printf("\n %d",i);
        }
        i++;
        
    }
    
}