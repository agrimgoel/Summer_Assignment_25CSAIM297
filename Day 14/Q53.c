#include <stdio.h>
int main() {
    int arr[100], n, i, a, k = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter a number to search: ");
    scanf("%d", &a);
    for (i = 0; i < n; i++) {
        if (arr[i] == a) {
            printf("%d is found at position %d.\n", a, i + 1);
            k = 1;
            break;
        }
    }
    if (k == 0) {
        printf("%d is not present in the array.\n", a);
    }
    return 0;
}