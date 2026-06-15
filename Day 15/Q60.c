#include <stdio.h>
int main() {
    int n, i, count = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if(arr[i] != 0) {
            arr[count++] = arr[i];
        }
    }
    while(count < n) {
        arr[count++] = 0;
    }
    printf("Array after moving zeroes to end:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }    
    return 0;
}
