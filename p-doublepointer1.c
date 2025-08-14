#include<stdio.h>

int main(){

    int a = 10;
    int *p = &a;
    int **dbp = &p;

    printf("a = %d\n",a);
    printf("Address a = %d\n",&a);
    printf("store in only p = %d\n",p);
    printf("p = %d\n",*p);
    printf("address store in **dbp = %d\n",&p);
    printf("store in dbp = %d\n",dbp);
    printf("store in *dbp = %d\n",*dbp);
    printf("store in **dbp = %d\n",**dbp);
}