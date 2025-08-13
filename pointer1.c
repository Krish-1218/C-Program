#include<stdio.h>
int main(){

    int a=10;
    int *p=&a;

    printf("Value of a is %d\n",a); //10
    printf("Address of a is %d\n",&a); // a100 bcoz &a
    printf("Value of p is %d\n",p); // a100 bcoz it's p not *p 
    printf("Value of *p is %d\n",*p); //10 *p
}