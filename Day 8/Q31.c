#include <stdio.h>
int main() {
    int a, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &a);
    for (i = 1; i <= a; i++) {
        for (j = 1; j <= i; j++) {
            printf("%c", 'A' + (j - 1));
        }
        printf("\n");
    }

    return 0;
}