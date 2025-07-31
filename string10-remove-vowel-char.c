#include<stdio.h>
int main(){

    char str[20];
    printf("Enter a String :");
    scanf("%s",str);

    for (int i =0; str[i]; i++)
    {
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
        {
           str[i]=str[i+1];
           continue;
        }
        printf("%c",str[i]);
    }
    
}