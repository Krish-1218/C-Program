#include<stdio.h>
int main(){
    int cons_num;
    char cons_name[10];
    float unit, total_bill,gst;

    printf("Enter the Consumer Number : ");
    scanf("%d",&cons_num);

    printf(" Enter the Consumer Name : ");
    scanf("%s",&cons_name);

    printf("Enter the unit : ");
    scanf("%f",&unit);
   
    if (unit<=100)
    {
        total_bill=500+unit*3.33;
        printf("\n total bill is %f  ",total_bill,unit);
    }
    else if (unit>=101&&unit<=300)
    {
        total_bill=unit*5.55;
        printf("\n total bill is %f ",total_bill,unit);
    }
    else if (unit>=301&&unit<=500)
    {
        total_bill=unit*7.77;
         printf("\n total bill is %f ",total_bill,unit);
    }
    gst=total_bill*0.06;
    printf("gst is %f",gst);
    
    
    
}