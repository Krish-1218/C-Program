#include<stdio.h>
int main(){

    char name[20];
    printf("Enter Name: ");
    scanf("%s", name);

    int len;
    for (len = 0; name[len]!='\0'; len++);


    for (int i = 0; i < len; i++) {
        if (name[i] >= 'a' && name[i] <= 'z') 
        {
           name[i]=name[i]-32;
        }
        else if (name[i] >= 'A' && name[i] <= 'Z')
        {
            name[i]=name[i]+32;
        }
        
    }
    printf("Toggle case: %s\n", name);
   

}


