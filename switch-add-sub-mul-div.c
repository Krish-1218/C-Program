#include<stdio.h>
int main(){

    int Num1,Num2,choice=0;
    float total;

    printf("Enter your choice : ");
    printf("\n 1-Addition \n 2-Subtraction \n 3-Multiplication \n 4-Division \n");
    scanf("%d",&choice);
    printf("Enter any two number : ");
    scanf("%d%d",&Num1,&Num2);

    switch (choice)
    {
    case 1:
        total= Num1 + Num2;
        printf("Addition is : %d",total);
        break;

    case 2:
        total= Num1 - Num2;
        printf("Subtraction is : %d",total);
        break;
    
    case 3:
        total=Num1 * Num2;
        printf("Multiplication is %d",total);
        break;
    
    case 4:
        total=Num1/Num2;
        printf("Division is %d",total);
        break;
        

    default:
    printf("Invalid ");
        break;
    }
}