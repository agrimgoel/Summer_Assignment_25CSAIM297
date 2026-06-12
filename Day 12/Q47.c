#include <stdio.h>
int getFibonacciTerm(int termIndex) {
    int t1 = 0, t2 = 1, n = 0, i;
    if (termIndex == 1) {
        return t1;
    }
    if (termIndex == 2) {
        return t2;
    }
    for (i = 3; i <= termIndex; i++) {
        n = t1 + t2;
        t1 = t2;
        t2 = n;
    }
    return n;
}
int main() {
    int n, i;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Fibonacci Series up to %d terms: \n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", getFibonacciTerm(i));
    }
    printf("\n");
    return 0;
}