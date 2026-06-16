#include <stdio.h>
int main() {
    int arr[100], n, i, j, tsum, f = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the target sum: ");
    scanf("%d", &tsum);
    printf("Pairs with sum %d are:\n", tsum);
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == tsum) {
                printf("Pair found: %d and %d (at indices %d and %d)\n", arr[i], arr[j], i, j);
                f = 1;
            }
        }
    }
    if (f == 0) {
        printf("No pair found with the given sum.\n");
    }
    return 0;
}