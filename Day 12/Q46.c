#include <stdio.h>
int isArmstrong(int n) {
    int i = n, sum = 0, r;
    while (n > 0) {
        r = n % 10;
        sum = sum + (r * r * r);
        n = n / 10;
    }
    if (i == sum) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int a;
    printf("Enter a 3-digit integer: ");
    scanf("%d", &a);
    if (isArmstrong(a) == 1) {
        printf("%d is an Armstrong number.\n", a);
    } else {
        printf("%d is not an Armstrong number.\n", a);
    }
    return 0;
}