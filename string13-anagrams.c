#include<stdio.h>
#include<string.h>

void sortStrings(char str[]) {

    int len=strlen(str);
    for (int i = 0; i < len; i++)
    {
        for (int j = 0; j < len-1; j++)
        {
            if (str[j] > str[j + 1]) {
                char temp = str[j];
                str[j] = str[j + 1];
                str[j + 1] = temp;
            }
        }
        
    }
    
}

int mystrcmp(char str1[], char str2[]) {
       
    int i=0;
    while (str1[i]!='\0' && str2[i]!='\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];
}

int main() {
    char str1[] = "listen";
    char str2[] = "silent";
    sortStrings(str1);
    sortStrings(str2);
    printf("Sorted str1: %s\n", str1);
    printf("Sorted str2: %s\n", str2);
    if (mystrcmp(str1, str2) == 0) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }
}

