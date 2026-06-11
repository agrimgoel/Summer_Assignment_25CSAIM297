#include <stdio.h>
int main() {
    int a, b, product = 1;
    printf("Enter any integer number: ");
    scanf("%d", &a);
    if (a < 0) {
        a = -a;
    }
    for (; a > 0; a = a / 10) {
        b = a % 10;
        product = product * b;
    }
    printf("\nProduct of the digits = %d\n", product);
    return 0;
}