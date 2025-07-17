#include<stdio.h>

int main(){

int a,n,b=1;

printf("Enter a number : ");
scanf("%d",&a);

printf("To Table : ");
scanf("%d",&n);

while (a<=n)
{
    b=1;
    while (b<=10)
    {
        printf("%d \t",a*b);
        b++;
    }
    printf("\n");
    
    a++;
}

}