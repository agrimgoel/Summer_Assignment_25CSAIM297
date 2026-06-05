#include <stdio.h>
int main() {
    int a, b, c = 0;
    printf("Enter an integer number to reverse: ");
    scanf("%d", &a);
    if (a < 0) {
        a = -a;
    }
    while (a > 0){
        b = a % 10;
        c = (c * 10) + b;
        a = a / 10;
    }
    if (a< 0){
        c = -c;
    }
    printf("\nReversed Number = %d\n", c);
    return 0;
}