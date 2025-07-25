#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d", &num);
if (num==0){
    printf("Number is zero");
}
    else if (num%3==0 && num%5==0)
    {
        printf("Number is Div by 3 and 5");
    }
    else if(num%3==0){
        printf("Number is Div by 3 only");
    }
    else if (num%5==0){
        printf("Number is Div by only");
    }
    else{
        printf("Number is not div by both");
    }
}