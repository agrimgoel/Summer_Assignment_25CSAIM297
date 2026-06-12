#include <stdio.h>
int isPerfect(int num) {
    int sum = 0, i;
    for (i = 1; i < num; i++) {
        if (num % i == 0) {
            sum = sum + i;
        }
    }
    if (sum == num) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (isPerfect(a) == 1) {
        printf("%d is a perfect number.\n", a);
    } else {
        printf("%d is not a perfect number.\n", a);
    }
    return 0;
}