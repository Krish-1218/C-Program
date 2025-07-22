#include<stdio.h>
int main(){

    for (int i=1; i<=5; i++)
    {
        for (int c=i; c<=5; c++)
        {
            printf(c%2!=0?"1":"0");
        }
        
        printf("\n");
    }
    
}