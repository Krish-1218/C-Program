#include<stdio.h>
int main(){

    int num,a=2,flag=0;

    printf("Enter a Number : ");
    scanf("%d",&num);

    while (a<num/2)
    {
        if (num%a==0)
        {
            flag=1;
            break;
        }
        a++;
        
    }
    printf(flag==0?"It is Prime Number":"It is Not a Prime Number");
    
}