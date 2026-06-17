#include <stdio.h>
int main() {
    int n1, n2, i, j, k = 0;
    printf("Enter number of elements in first array: ");
    scanf("%d", &n1);
    int arr1[n1];
    printf("Enter %d elements for first array:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("Enter number of elements in second array: ");
    scanf("%d", &n2);
    int arr2[n2];
    printf("Enter %d elements for second array:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }
    int interArr[n1 < n2 ? n1 : n2];
    for(i = 0; i < n1; i++) {
        for(j = 0; j < n2; j++) {
            if(arr1[i] == arr2[j]) {
                int found = 0;
                for(int m = 0; m < k; m++) {
                    if(interArr[m] == arr1[i]) {
                        found = 1;
                        break;
                    }
                }
                if(!found) {
                    interArr[k++] = arr1[i];
                }
            }
        }
    }
    printf("Intersection of arrays:\n");
    for(i = 0; i < k; i++) {
        printf("%d ", interArr[i]);
    }
    return 0;
}
