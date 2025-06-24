#include<stdio.h>
int main()
{
    int l , w;
    printf("Enter the length of the rectangle: ");
    scanf("%d",&l);

    printf("Enter the width of the rectangle: ");
    scanf("%d",&w);

    int total = 2*(l+w);
    printf("The perimeter of the rectangle is: %d",total);
    return 0;

}