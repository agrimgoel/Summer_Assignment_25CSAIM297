#include <stdio.h>
int sumOfDigits(int a) {
    if (a == 0) {
        return 0;
    }
    else {
        return (a % 10) + sumOfDigits(a / 10);
    }
}
int main() {
    int b, r;
    printf("Enter a number: ");
    scanf("%d", &b);
    r = sumOfDigits(b);
    printf("Sum of digits of %d is: %d\n", b, r);\
    return 0;
}