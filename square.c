#include<stdio.h>
int main(){
    int side;
    printf("Enter the number of sides: ");
    scanf("%d",&side);

    int square = side * side;
    printf("square of number is %d\n",square);

    return 0;
}