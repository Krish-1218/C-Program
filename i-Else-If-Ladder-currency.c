#include<stdio.h>
int main(){

    int choice1,choice2,repeat;
    float input,result;

    menu:
    printf("\n 1-Rupees \n 2-Dollar \n 3-Euro");
    printf("\n Enter your currency : ");
    scanf("%d",&choice1);

    if (choice1==1)
    {
        rupees:
        printf("\n Enter your amount in rupees : ");
        scanf("%f",&input);

        printf("\n Enter your choice to convert your currency");
        
        printf("\n 1-Rupees \n 2-Dollar \n 3-Euro \n ");
        scanf("%d",&choice2);

        if (choice2==1)
        {
            result=input;
            printf(" \n %f rupees = %f rupees",input,result);
        }
        else if (choice2==2)
        {
           result=input/85.69;
           printf("\n %f rupees = %f dollar",input,result);
        }
        else if (choice2==3)
        {
            result=input/100.57;
            printf("\n %f rupees = %f euro",input,result);
        }

        printf("\n You want to continue rupees convertor press 1 : ");
        scanf("%d",&repeat);

        if (repeat==1)
        {
            goto rupees;
        } 
        
    }
    else if (choice1==2)
    {
        dollar:
        printf("\n Enter your amount in dollar : ");
        scanf("%f",&input);

        printf("\n Enter your choice to convert  your currency ");

        printf("\n 1-Rupees \n 2-Dollar \n 3-Euro \n");
        scanf("%d",&choice2);

        if (choice2==1)
        {   
            result=input*85.69;
            printf(" \n %f dollar = %f rupees",input,result);
        }
        else if (choice2==2)
        {
            result=input;
            printf("\n %f dollar = %f dollar",input,result);
        }
        else if (choice2==3)
        {
            result=input*0.85;
            printf("\n %f dollar = %f euro",input,result);
        }

       printf("\n You want to continue dollar convertor press 1 : ");
        scanf("%d",&repeat);

        if (repeat==1)
        {
            goto dollar;
        }
        
    }
    else if (choice1==3)
    {
        euro:
        printf("Enter your amount in euro : ");
        scanf("%f",&input);

        printf("Enter Your Choice to Convert Your Currency : ");
        printf("\n 1-Rupees \n 2-Dollar \n 3-Euro ");
        scanf("%d",&choice2);

        if (choice2==1)
        {
            result=input*100.57;
            printf("\n %f euro = %f rupees ",input,result);
        }
        else if (choice2==2)
        {
            result=input*1.17;
            printf("\n %f euro = %f dollar",input,result);
        }
        else if (choice2==3)
        {
            result=input;
            printf("\n %f euro = %f euro ",input,result);
        }
        printf(" \nYou Want To Convert Euro Convertor press 1 ");
        scanf("%d",&repeat);

        if (repeat==1)
        {
            goto euro;
        }
        
    }

    printf("\n You want to see menu press 2 : ");
    scanf("%d",&repeat);
    if (repeat==2)
    {
        goto menu;
    }
    return 0;
   
}