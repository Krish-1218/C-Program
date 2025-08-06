#include<stdio.h>

int mystrcmp(char str1[], char str2[]) {
       
    int i=0;
    while (str1[i]!='\0' && str2[i]!='\0') {
        if (str1[i] != str2[i]) {
            return str1[i] - str2[i];
        }
        i++;
    }
    return str1[i] - str2[i];//one string ends and the other continues
}
int main() {

    char str1[20], str2[20];
    printf("Enter first string: ");
    scanf("%s", str1);
    printf("Enter second string: ");
    scanf("%s", str2);

    int result = mystrcmp(str1, str2);
    if (result == 0) {
        printf("Strings are equal.\n");
    } else if (result < 0) {
        printf("First string is less than second string.\n");
    } else {
        printf("First string is greater than second string.\n");
    }
    return 0;
}