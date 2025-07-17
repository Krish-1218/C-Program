#include <stdio.h>
int main()
{

    int num, count = 0, temp, a, sum=0,power=1;

    printf("Enter a Number : ");
    scanf("%d", &num);

    temp = num;

    while (num > 0)//count
    {
        count++;
        num = num / 10;
    }

    num = temp;
    while (num > 0)//fetch digit
    {
        int digit = num % 10;
        a = 1;
        power = 1;
        while (a <= count) //power calculation
        {
            power = power * digit;
            a++;
        }
        sum = sum + power;
        num = num / 10;
    }
    if (temp== sum)
    {
        printf("%d is Armstrong", temp);
    }
    else
    {
        printf("%d is Not Armstrong", temp);
    }
   
}