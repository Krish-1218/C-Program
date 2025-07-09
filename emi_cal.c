#include<stdio.h>
#include<math.h>
int main(){

    int loanAmount, Months, Years;
    float InterestRate, Total_Interest, Total_Pay_Amount, Emi, Monthly_Rate;

    printf("Enter Loan Amount : ");
    scanf("%d",&loanAmount);

    printf("Enter Years : ");
    scanf("%d",&Years);

    printf("Enter Interest Rate : ");
    scanf("%f",&InterestRate);

    Monthly_Rate= InterestRate/(12*100);

    Months= Years*12;

    Emi= (loanAmount*Monthly_Rate*pow(1+Monthly_Rate,Months))/(pow(1+Monthly_Rate,Months)-1);

    Total_Pay_Amount= Emi*Months;

    Total_Interest= Total_Pay_Amount-loanAmount;

    printf("\n\t Loan Amount \t:\t %d",loanAmount);
    printf("\n\t Years \t\t:\t %d",Years);
    printf("\n\t Intrest Rate \t:\t %.2f",InterestRate);
    printf("\n\t Total Months \t:\t %d",Months);
    printf("\n\t Monthly Rate \t:\t %.2f",Monthly_Rate);
    printf("\n\t Emi  \t\t:\t %.2f",Emi);
    printf("\n\t Total Amount \t:\t %.2f",Total_Pay_Amount);
    printf("\n\t Total Intrest \t:\t %.2f",Total_Interest);

    return 0;
}