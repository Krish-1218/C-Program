#include<stdio.h>
int main(){

  printf("Enter Your Name :");
  char name[20];
  scanf("%s",name);

  int length;
  for(length=0;name[length]!='\0';length++);

  printf("Original name:%s",name);
  int frist=0,last=length-1;

  while(frist<last){
    char temp=name [frist];
    name [frist]=name[last];
    name [last]=temp;
    frist++;
    last--;
  }
    printf(" revers name:%s",name);
  
    return 0;
}