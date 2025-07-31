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
    }
    
    int first=0, last=len-1, flag=1;
   while (first<last)
   {
    if (name[first]!=name[last])
    {
        flag=0;
        break;
    }
    first++;
    last--;
   }
   printf(flag==1?"it's a pallindrome":"it's not a pallindrome");
}