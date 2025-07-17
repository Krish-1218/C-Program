#include<stdio.h>
int main(){

   int a=1,num,first=0,second=1,third;

   printf("Enter a length : ");
   scanf("%d",&num);

   while (a<=num)
   {
    printf("%d \t",first);
    third=first+second;
    first=second;
    second=third;
    a++;
   }
   
}