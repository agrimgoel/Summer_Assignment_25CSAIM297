#include<stdio.h>
int main()
{
    int a;
    int factorial = 1;
    printf("Enter a number: ");
    scanf("%d", &a);
    for (int i = 1; i <= a; i++){
        factorial *= i;
    }
    printf("The factorial of %d is: %d", a, factorial);
    return 0;
}