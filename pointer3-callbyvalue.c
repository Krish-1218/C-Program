#include<stdio.h>

void swap(int a, int b)
{
    int temp=a;
    a=b;
    b=temp;

     printf("In swap function : Value of a is %d and Value of b is %d\n",a,b);
}

int main(){

    int a=10 , b=20;

    printf("Before swaping : Value of a is %d and Value of b is %d\n",a,b);

    swap(a,b);

     printf("After swaping : Value of a is %d and Value of b is %d\n",a,b);



}