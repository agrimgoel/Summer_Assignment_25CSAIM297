#include <stdio.h>
int main() {
    int arr[100], n, i;
    int sum, asum = 0, m;
    printf("Enter the total number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n - 1);
    for (i = 0; i < n - 1; i++) {
        scanf("%d", &arr[i]);
        asum += arr[i];
    }
    sum = (n * (n + 1)) / 2;
    m = sum - asum;
    printf("The missing number is: %d\n", m);
    return 0;
}