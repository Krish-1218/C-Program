#include <stdio.h>
int main() {
    int a = 10;
    a += 5;   // a = 15
    printf("a += 5: %d\n", a);
    a -= 3;   // a = 12
    printf("a -= 3: %d\n", a);
    a *= 2;   // a = 24
    printf("a *= 2: %d\n", a);
    a /= 6;   // a = 4
    printf("a /= 6: %d\n", a);
    a %= 3;   // a = 1
    printf("a %%= 3: %d\n", a);
    return 0;
}
