#include <stdio.h>
int isPalindrome(int n) {
    int i = n, rev = 0, rem;
    while (n > 0) {
        rem = n % 10;
        rev = (rev * 10) + rem;
        n = n / 10;
    }
    if (i == rev) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    if (isPalindrome(a) == 1) {
        printf("%d is a palindrome.\n", a);
    } else {
        printf("%d is not a palindrome.\n", a);
    }
    return 0;
}