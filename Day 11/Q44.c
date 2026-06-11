#include<stdio.h>
int findFactorial(int n) {
    int i, fact = 1; 
    if (n < 0) {
        return -1;
    }
    for(i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}
int main() {
    int a, r;
    printf("Enter a number: ");
    scanf("%d", &a);
    r = findFactorial(a);
    if(r == -1) {
        printf("Factorial doesn't exist.\n");
    }
    else {
        printf("Factorial is = %d\n", r);
    }
    return 0;
}