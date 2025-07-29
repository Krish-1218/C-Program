#include<stdio.h>
#include<string.h>
int main(){

    
    printf("Enter Name: ");
    char name[20];
    scanf("%s",name);

    int length;
    for ( length = 0; name[length]!='\0'; length++);
    
    for (int i = length-1; i>=0; i-- )
    {
        printf("%c",name[i]);
    }
    
}