#include<stdio.h>
#include<string.h>

int main(){
    
    char name[20];
    scanf("%s",name);

    int i;
    for(i=0; name[i]!='\0'; i++);
    printf("length : %d",i);
}