#include<stdio.h>
int main(){

    int a=10;
    int *p=&a;

    printf("\nBefore A is %d\n",a);

    printf("--------------------------------------\n");
   
    *p=50;
   
    printf("*p = 50  // change the value at the address stored in p \n");
    printf("--------------------------------------\n");

    printf("After A is %d\n",a);
}