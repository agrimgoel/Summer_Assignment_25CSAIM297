#include<stdio.h>
int findMax(int i, int j) {
    int m;
    if(i > j) {
        m = i;
    }
    else {
        m = j;
    }
    return m;
}
int main() {
    int a, b, l;    
    printf("Enter first number: ");
    scanf("%d", &a);    
    printf("Enter second number: ");
    scanf("%d", &b);
    l = findMax(a, b);    
    printf("\nThe maximum number is = %d\n", l);    
    return 0;
}