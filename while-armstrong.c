#include <stdio.h>
#include <math.h>
int main()
{

    int num, count = 0, a, og;

    printf("Enter a Number : ");
    scanf("%d", &num);

    og = a = num;

    while (num != 0)
    {
        count++;
        num = num / 10;
    }

    while (a != 0)
    {
        int digit = a % 10;
        num +=round(pow(digit, count));
        a = a / 10;
    }

    if (og == num)
    {
        printf("%d is Armstrong", og);
    }
    else
    {
        printf("%d is Not Armstrong", og);
    }
}