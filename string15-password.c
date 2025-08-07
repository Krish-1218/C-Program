#include<stdio.h>
#include<string.h>

void password(){

}
int main(){
    char str[100];
    printf("Enter Your Password :");
    scanf("%s", str);

     int len;
    for (len = 0; str[len]!='\0'; len++);


    int upper = 0;
    int digit = 0;
    int special = 0;

    for (int i = 0; i < len; i++)
     {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            upper = 1;
        }   
        else if (str[i] >= '0' && str[i] <= '9'){
             digit = 1;
        }
       else{
        special = 1;
       } 
    }
    int count = 0;
    if (len >= 8) count++;
    if (upper) count++;
    if (digit) count++;
    if (special) count++;

    if (count == 4)
        printf("Strong password\n");
    else if (count >= 2)
        printf("Medium password\n");
    else
        printf("Weak password\n");
}
