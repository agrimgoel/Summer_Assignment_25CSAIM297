#include <stdio.h>
int main() {
    int n, i, k;
    printf("Enter number of elements: ");
    scanf("%d", &n);    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter number of positions to rotate left: ");
    scanf("%d", &k);
    k = k % n;
    int temp[n];
    for(i = 0; i < n; i++) {
        temp[i] = arr[(i + k) % n];
    }
    for(i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
    printf("Array after left rotation:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }    
    return 0;
}
