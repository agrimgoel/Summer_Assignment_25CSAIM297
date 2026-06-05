#include <stdio.h>
int main() {
    int a, b, sum = 0;
    printf("Enter any integer number: ");
    scanf("%d", &a);
    if (a < 0) {
        a = -a;
    }
    while (a > 0) {
        b = a % 10;
        sum = sum + b; 
        a = a / 10;
    }
    printf("\nSum of the digits = %d\n", sum);
    return 0;
}