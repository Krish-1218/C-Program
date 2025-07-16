#include<stdio.h>
int main(){

    int num,reverse=0,pali;

    printf("Enter a Number : ");
    scanf("%d",&num);

    pali=num;

    while (num>0)
    {
        int digit=num%10;
        reverse=reverse*10+digit;
        num=num/10;
        
    }
     if (pali==reverse)
        {
            printf("Number is Pallindrome ");
        }
        else{
            printf("Number is not pallindrome");
        }   
}