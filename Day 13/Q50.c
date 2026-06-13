#include <stdio.h>
int main() {
    int n, sum = 0;
    float a;
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
        sum += arr[i];
    }
    a = (float)sum / n;
    printf("\nSum of array elements = %d\n", sum);
    printf("Average of array elements = %.2f\n", a);
    return 0;
}