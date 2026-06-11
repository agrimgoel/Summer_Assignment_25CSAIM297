#include<stdio.h>
int main()
{
    int a;
    printf("Enter any integer number: ");
    scanf("%d", &a);
    if (a%2 == 0) {
        printf("\n%d is an Even number.\n", a);
    } else {
        printf("\n%d is an Odd number.\n", a);
    }
    return 0;
}