#include<stdio.h>

int main(){
    int Product_id,prod_qty,price,total;
    char Name[10];
    float cgst,sgst,final_total;

    printf("Enter Product_Id :");
    scanf("%d",&Product_id);

    printf("Enter Product Quantity :");
    scanf("%d",&prod_qty);

     printf("Enter Price :");
    scanf("%d",&price);

    printf("Product Name :");
    scanf("%s",Name);

   total=price*prod_qty;
   cgst=total*0.06;
   sgst=total*0.06;
   final_total=total+cgst+sgst;

   printf("\n\t Product Id \t:\t %d",Product_id);
   printf("\n\t Product Qty \t:\t %d",prod_qty);
   printf("\n\t Price \t\t:\t %d",price);
   printf("\n\t Total \t\t:\t %d",price);

   printf("\n\t CGST  \t\t:\t %f",cgst);
   printf("\n\t SGST \t\t:\t %f",sgst);
   printf("\n\t Final Total  \t:\t %f",final_total);
   

    
}