#include<stdio.h>
#include<string.h>
int main(){

    char name[]="hello";
    printf("%s\n",name);
    name[0]='w';
    printf("%s\n",name);

    int length;
     for ( length = 0; name[length]!='\0'; length++);
    
    for (int i = length-1; i>=0; i-- )
    {
        printf("%c",name[i]);
    }
}