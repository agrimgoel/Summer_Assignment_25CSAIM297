#include<stdio.h>
int main (){
    int a, sum;
    printf("Enter a number: ");
    scanf("%d", &a);
    sum = a*(a+1)/2;
    printf("The sum of first %d natural numbers is: %d", a, sum);
}