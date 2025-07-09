#include<stdio.h>
int main(){
    int cons_num;
    char cons_name[10];
    float unit,bill,gst,Total_Bill;

    printf("Enter the Consumer Number : ");
    scanf("%d",&cons_num);

    printf("Enter the Consumer Name : ");
    scanf("%s",&cons_name);

    printf("Enter the unit : ");
    scanf("%f",&unit);

    if (unit==0)
    {
        bill=500;
        printf("Bill Is %f ",bill);
    }
    else if (unit<=100)
    {
        bill=unit*3.33;
        printf("\n total bill is %f  ",bill,unit);
    }
    else if (unit>100&&unit<300)
    {
        bill=((100*3.33)+(unit-100)*5.55);
        printf("\n total bill is %f ",bill,unit);
    }
    else if (unit>300&&unit<500)
    {
        bill=((100*3.33)+(200*5.55)+(unit-300)*7.77);
         printf("\n total bill is %f ",bill,unit);
    }
    else if (unit>500)
    {
        bill=((100*3.33)+(200*5.55)+(300*7.77)+(unit-500)*11.1);
    }
    
    gst=bill*0.06;
    Total_Bill=bill+gst;

    printf("\n\t--------------------------------------");
     printf("\n\t Consumer Number \t:\t %d",cons_num);
     printf("\n\t Consumer Name \t\t:\t %s",cons_name);
     printf("\n\t Unit \t\t\t:\t %f",unit);
     printf("\n\t Bill \t\t\t:\t %f",bill);
     printf("\n\t GST \t\t\t:\t %f",gst);
     printf("\n\t Total Bill \t\t:\t %f",Total_Bill);

    
}