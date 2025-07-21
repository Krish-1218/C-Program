#include<stdio.h>
int main(){

  
    for (int r=1; r<=5; r++)
    {
        for (int c=1; c<=5; c++)
        {
        
            if (r%2==1)
            {
                printf("1");
            }
            else{
                printf("0");
            }
            
        }
        
        printf("\n");
    }
    
}