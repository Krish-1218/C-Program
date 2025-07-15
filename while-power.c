#include<stdio.h>
int main(){
    int base, power, result = 1, i = 1;

    printf("Enter base : ");
    scanf("%d", &base);

    printf("Enter power : ");
    scanf("%d", &power);

    while (i <=power) {
        result = result * base;
        i++;
    }

    printf(" %d to the power %d = result %d\n", base, power, result);
}