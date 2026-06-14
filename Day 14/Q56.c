#include <stdio.h>
int main() {
    int arr[100], n, i, j, c, a = 0, k;
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    printf("Enter %d integers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Duplicate elements are:\n");    
    for (i = 0; i < n; i++) {
        c = 0;
        for (k = 0; k < i; k++) {
            if (arr[i] == arr[k]) {
                a = 1;
                break;
            }
        }
        if (a == 0) {
            for (j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    c++;
                }
            }
            if (c > 0) {
                printf("%d ", arr[i]);
            }
        }
    }
    printf("\n");
    return 0;
}