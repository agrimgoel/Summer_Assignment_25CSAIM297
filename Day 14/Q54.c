#include <stdio.h>
int main() {
    int arr[100], n, i, a, k = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to find its frequency: ");
    scanf("%d", &a);
    for (i = 0; i < n; i++) {
        if (arr[i] == a) {
            k++;
        }
    }
    printf("Frequency of %d is: %d\n", a, k);
    return 0;
}