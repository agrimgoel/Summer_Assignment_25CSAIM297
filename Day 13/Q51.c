#include <stdio.h>
int main() {
    int n;
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
    int l = arr[0];
    int s = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > l) {
            l = arr[i];
        }
        if (arr[i] < s) {
            s = arr[i];
        }
    }
    printf("\nSmallest element = %d\n", s);
    printf("Largest element = %d\n", l);
    return 0;
}