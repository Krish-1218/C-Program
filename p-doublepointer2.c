#include<stdio.h>
int main(){

    int a = 10;
    int *p = &a;
    int **dpb= &p;

    printf("A = %d\n",a);
    printf("*P = %d\n",*p);
    printf("**DBP = %d\n",**dpb);

    printf("------------------------------\n");

    **dpb = 20;
    printf("A = %d\n",a);
    printf("*P = %d\n",*p);
    printf("**DBP = %d\n",**dpb);

    printf("------------------------------\n");

    *p = 50;
    printf("A = %d\n",a);
    printf("*P = %d\n",*p);
    printf("**DBP = %d\n",**dpb);

}