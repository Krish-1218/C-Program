#include<stdio.h>
int main(){
    int a,b;

    for (a=1; a<=5; a++)  //loop for rows 5
    {
       for (b=1; b<=4; b++)// loop for columns 4
       {
           printf("  %d", b);
       }
       printf("\n%d", a);
    }
    
}