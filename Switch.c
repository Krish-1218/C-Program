#include<stdio.h>
int main(){

    int ch;
    printf("Enter any number : ");
    scanf("%d",&ch);

    switch (ch)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wen");
        break;
    case 4:
        printf("thus");
        break;
    case 5:
        printf("Fir");
        break;
    case 6:
        printf("Sat");
        break;
    case 7:
        printf("Sunday");
        break;

    default:
    printf("Invalid ");
        break;
    }
}