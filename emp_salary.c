#include<stdio.h>

int main(){
    int emp_id, basic_salary;
    char emp_name [10];
    float hra,ta,ma,pf,gross_salary;

    printf("Employee ID : ");
    scanf("%d",&emp_id);

    printf("Basic salary is : ");
    scanf("%d",&basic_salary);

    printf("Employee Name : ");
    scanf("%s",emp_name);

    hra=basic_salary*0.4;
    ta=basic_salary*0.09;
    ma=basic_salary*0.08;
    pf=basic_salary*0.07;

    gross_salary=basic_salary+hra+ta+ma-pf;

   printf("\n\t Employee ID \t:\t %d",emp_id);
   printf("\n\t Basic Salary \t:\t %d",basic_salary);
   printf("\n\t hra \t\t:\t %.2f",hra);
   printf("\n\t ta \t\t:\t %.2f",ta);
   printf("\n\t ma \t\t:\t %.2f",ma);
   printf("\n\t pf \t\t:\t %.2f",pf);
   printf("\n\t Gross Salary \t:\t %.2f",gross_salary);

   return 0;

}