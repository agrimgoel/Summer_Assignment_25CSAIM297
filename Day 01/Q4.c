#include<stdio.h>
int main(){
    int a,b;
    int count = 0;
    printf("Enter a number: ");
    scanf("%d", &a);
    b = a;
    for (; b > 0; b /= 10) {
            count++;
    }
    printf("The number of digits in %d is: %d", a, count);
    return 0;
}