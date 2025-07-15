#include<stdio.h>
int main(){

    int ch;

    ch=65;

    while (ch<=90)
    {
        printf("\n %d : %c\t | %d : %c",ch,ch,ch+32,ch+32);
        ch++;
    }
    
}