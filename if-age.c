#include<stdio.h>
int main(){

    int age;
    printf("Enter the Age :");
    scanf("%d",&age);

    if (age<0)
    {
        age=-age;
    }
    
    printf("\n Your age is : %d ",age);
}