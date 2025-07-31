#include<stdio.h>
int main (){

    char name[20];
    printf("Enter Your Name :");
    scanf("%s",name);

    printf("Enter the Start Point and End Point of Substring :");
    int start, End;
    scanf("%d %d",&start,&End);

    char substring[20];
    int i=0;
    while (start<=End)
    {
        substring[i++]=name[start];
        start++;
    }
    substring[i]='\0';
    printf("SubString is %s",substring);
}