#include<stdio.h>
#include<string.h>

void sortStrings(char str[]) {

    int len=strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len-1; j++)
        {
            if (str[j] > str[j + 1]) {
                // Swap characters
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
        
    }
    
}

int main() {
    char str[]="zwqvdcba";
    sortStrings(str);
    printf("Sorted string: %s\n", str);
}