#include<stdio.h>
#include<string.h>
int main(){

    

    printf("Enter Name: ");
    char name[20];
    scanf("%c",name);

    for (int i = 0; name[i]!='\0'; i++)
    {
        if ((name[i]=='a')||(name[i]=='e')||(name[i]=='i')||(name[i]=='o')||(name[i]=='u'))
    {
      printf("%c",name[i]);
    }
        
    }
    

}