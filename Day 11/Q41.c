#include<stdio.h>
int sum(int a, int b) {
    int result;
    result = a + b;
    return result;
}
int main() {
    int i, j, t;
    printf("Enter first number: ");
    scanf("%d", &i);
    printf("Enter second number: ");
    scanf("%d", &j);
    t = sum(i, j);
    printf("\nThe sum is = %d\n", t);
    return 0;
}