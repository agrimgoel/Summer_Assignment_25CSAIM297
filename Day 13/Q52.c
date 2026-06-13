#include <stdio.h>
int main() {
    int n, e = 0, o = 0;
    printf("Enter the number of elements: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Invalid array size.\n");
        return 1;
    }
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            e++;
        } else {
            o++;
        }
    }
    printf("\nTotal even elements: %d\n", e);
    printf("Total odd elements: %d\n", o);
    return 0;
}