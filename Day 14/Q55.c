#include <stdio.h>
int main() {
    int arr[100], n, i, a, c;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    if (n < 2) {
        printf("Invalid Input!\n");
        return 0;
    }
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (arr[0] > arr[1]) {
        a = arr[0];
        c = arr[1];
    } else {
        a = arr[1];
        c = arr[0];
    }
    for (i = 2; i < n; i++) {
        if (arr[i] > a) {
            c = a;
            a = arr[i];
        }
        else if (arr[i] > c && arr[i] != a) {
            c = arr[i];
        }
    }
    printf("The second largest element is: %d\n", c);
    return 0;
}