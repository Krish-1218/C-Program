#include<stdio.h>
int main(){
    int Number;
    printf("Enter a Number : ");
    scanf("%d",&Number);

    switch (Number%2)
    {
    case 0:
        printf("it is even");
        break;
    
 
    default:printf("it is odd");
        break;
    }
}