#include<stdio.h>
int main(){
    int choice1 ,choice2,repeat;
    int total=0;
    int count=0;
    float cgst,sgst,final_total;
    
    menu:
    printf("\n Enter Your Choice : ");
    printf("\n 1-Starter \n 2-Veg \n 3-NonVeg ");
    scanf("%d",&choice1);

    if (choice1==1)
    {
        starter:
        printf("It's a Starter");
        printf("\n 1-S1 \n 2-S2 \n 3-S3 ");
        scanf("%d",&choice2);

        if (choice2==1)
        {
            total=total+150;
        }
        else if (choice2==2)
        {
            total=total+200;
        }
        else if (choice2==3)
        {
            total=total+250;
        }
        else{
            printf("\n Invalid Order Number ");
        }
        
        if (choice2<=3)
        {
            count++;
            printf("\n %d Order Placed Successfully ",count);
        }
        
        
        printf("\n If You Want to order Another Starter press 1 ");
        scanf("%d",&repeat);
        if (repeat==1)
        {
            goto starter;
        }
        
    }
    else if (choice1==2)
    {
        veg:
        printf("It's a Veg ");
        printf("\n 1-V1 \n 2-V2 \n 3-V3 ");
        scanf("%d",&choice2);

         if (choice2==1)
        {
            total=total+200;
        }
        else if (choice2==2)
        {
            total=total+300;
        }
        else if (choice2==3)
        {
            total=total+350;
        }
        else{
            printf("\n Invalid Order Number ");
        } 
        
        if (choice2<=3)
        {
            count++;
            printf("\n %d Order Placed Successfully ",count);
        }

         printf("\n If You Want to order Another Veg food press 1 ");
        scanf("%d",&repeat);
        if (repeat==1)
        {
            goto veg ;
        }
    }
    else if (choice1==3)
    {
        nonveg:
        printf("It's a NonVeg ");
        printf("\n 1-NV1 \n 2-NV2 \n 3-NV3 ");
        scanf("%d",&choice2);

         if (choice2==1)
        {
            total=total+350;
        }
        else if (choice2==2)
        {
            total=total+400;
        }
        else if (choice2==3)
        {
            total=total+450;
        }
        else{
            printf("\n Invalid Order Number ");
        }  
        
        if (choice2<=3)
        {
            count++;
            printf("\n %d Order Placed Successfully ",count);
        }
         printf("\n If You Want to order Another Veg food press 1 ");
        scanf("%d",&repeat);
        if (repeat==1)
        {
            goto nonveg ;
        }
    }
    else
    {
        printf("Invalid Choice");
    }
     printf("\n If You Want to go menu press 1 ");
        scanf("%d",&repeat);
        if (repeat==1)
        {
            goto menu ;
        }

        if(count>0){
             cgst=total*0.06;
             sgst=total*0.06;
             final_total=total+cgst+sgst;


             printf("\n Total is : %d",total);
             printf("\n CGST is : %f",cgst);
             printf("\n SGST is : %f",sgst);
             printf("\n Final Total is : %f",final_total);

        }
        else{
            printf("No order Placed ");
        }
    


   
}