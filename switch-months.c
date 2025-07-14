#include<stdio.h>
int main(){

    int choice=0,repeat;

    menu:
    printf("Months Number : ");
    scanf("%d",&choice);

    switch (choice)
    {
    case 1:
        printf("\nNumber of Months in Jan is 31 days ");
        break;
    
    case 2:
        printf("\nNumber of Months in Feb is 28 days ");
        break;
    
    case 3:
        printf("\nNumber of Months in Mar is 31 days ");
        break;
    
    case 4:
        printf("\nNumber of Months in Apr is 30 days ");
        break;
    
    case 5:
        printf("\nNumber of Months in may is 31 days ");
        break;

    case 6:
        printf("\nNumber of Months in Jun is 30 days ");
        break;
    
    case 7:
        printf("\nNumber of Months in Jul is 31 days ");
        break;
    
    case 8:
        printf("\nNumber of Months in Aug is 31 days ");
        break;
    
    case 9:
        printf("\nNumber of Months in Sep is 30 days ");
        break;
    
    case 10:
        printf("\nNumber of Months in Oct is 31 days ");
        break;
    
    case 11:
        printf("\nNumber of Months in Nov is 30 days ");
        break;
    
    case 12:
        printf("\nNumber of Months in Dec is 31 days ");
        break;
    
    default:
        break;
    }

    printf("\nDo you want to continue? (1 for Yes, 0 for No): ");
    scanf("%d",&repeat);
     if (repeat==1)
    {
        goto menu;
    }
    else{
        printf("Thank You ");
    }

}