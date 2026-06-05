#include <stdio.h>
int main() {
    int a, b, reverse = 0, c;
    printf("Enter an integer number: ");
    scanf("%d", &a);
    c = a;
    if (a < 0) {
        a = -a;
    }
    for (; a > 0; a = a / 10) {
        b = a % 10;
        reverse = (reverse * 10) + b;
    }
    if (c < 0) {
        reverse = -reverse;
    }
    if (c == reverse) {
        printf("\n%d is a Palindrome number.\n", c);
    } else {
        printf("\n%d is not a Palindrome number.\n", c);
    }
    return 0;
}