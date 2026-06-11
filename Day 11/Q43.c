#include<stdio.h>
int checkPrime(int n) {
    int i;
    if (n <= 1) {
        return 0;
    }
    for(i = 2; i < n; i++) {
        if(n % i == 0) {
            return 0;
        }
    }    
    return 1;
}
int main() {
    int a, r;   
    printf("Enter a positive integer: ");
    scanf("%d", &a);
    r = checkPrime(a);
    if(r == 1) {
        printf("%d is a Prime Number.\n", a);
    }
    else {
        printf("%d is not a Prime Number.\n", a);
    }    
    return 0;
}