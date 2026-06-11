#include <stdio.h>
int main() {
    int a, b, c;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b) {
        c = a;
    } else {
        c = b;
    }
    while (1) {
        if (c % a == 0 && c % b == 0) {
            printf("LCM is: %d\n", c);
            break;
        }
        c++;
    }
    return 0;
}