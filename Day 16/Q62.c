#include <stdio.h>
int main() {
    int arr[100], n, i, j;
    int e, mc = 0;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++) {
        int count = 1; 
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
            }
        }
        if (count > mc) {
            mc = count;
            e = arr[i];
        }
    }
    printf("Element with maximum frequency is %d (appears %d times).\n", e, mc);
    return 0;
}