#include <stdio.h>
int main() {
    int a, b, i, j, count;
    printf("Enter lower limit: ");
    scanf("%d", &a);
    printf("Enter upper limit: ");
    scanf("%d", &b);
    printf("Prime numbers: ");
    for (i = a; i <= b; i++) {
        count = 0;
        for (j = 1; j <= i; j++) {
            if (i % j == 0) {
                count++;
            }
        }
        if (count == 2) {
            printf("%d ", i);
        }
    }
    printf("\n");
    return 0;
}