#include<stdio.h>
int main(){

    int r, c, s;

    for (r=5; r>=1; r--)
    {
        for (s=5; s>=r; s--)
        {
            printf(" ");
        }
        for (c=1; c<=r*2-1; c++)
        {
            printf(r%2!=0?(c%2!=0?"1":"0"):(c%2!=0?"1":"0"));
        }
        
        
        printf("\n");
    }
    
}