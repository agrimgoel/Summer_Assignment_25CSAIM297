#include <stdio.h>
int r = 0;
void reverseNumber(int n) {
    if (n == 0) {
        return;
    }
    else {
        r = (r * 10) + (n % 10);
        reverseNumber(n / 10);
    }
}
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
        reverseNumber(a);
        printf("Reversed number: %d\n", r);
    return 0;
}