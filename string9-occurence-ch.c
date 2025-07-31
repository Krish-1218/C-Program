#include<stdio.h>
int main(){

    char str[20];
    int count=0;
    int visit[20]={0};

    printf("Enter a String :");
    scanf("%s",str);

    for (int i = 0; str[i]!='\0'; i++)
    {
        if (visit[i]) continue;
        {
            count=1;
            for (int j=i+1; str[j]!='\0'; j++)
            {
                if (str[i]==str[j])
                {
                    count++;
                    visit[j]=1;
                }
                
            }
            
        }
        printf("%c : %d\n",str[i],count);
    }
    
}