#include<stdio.h>
#include<string.h>

int main(){

    char name[20];
    fgets(name,sizeof(name),stdin);

    int i;
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == '\n');
        printf("%c ", name[i]);
       // printf("[length :%d ]",i);
    }
}
