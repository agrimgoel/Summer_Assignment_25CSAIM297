#include <stdio.h>
int fact(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fact(n - 1);
}
int main() {
    int a, r;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a < 0) {
        printf("Error! Negative number.\n");
    } else {
        r = fact(a);
        printf("Factorial is: %d\n", r);
    }
    return 0;
}