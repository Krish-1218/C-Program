#include <stdio.h>

int main() {
    int a = 10, b = 20;

    printf("a = %d, b = %d\n\n", a, b);

    printf("a == b: %d\n", a == b);  // false = 0
    printf("a != b: %d\n", a != b);  // true = 1
    printf("a > b: %d\n", a > b);    // false = 0
    printf("a < b: %d\n", a < b);    // true = 1
    printf("a >= b: %d\n", a >= b);  // false = 0
    printf("a <= b: %d\n", a <= b);  // true = 1

    return 0;
}
