#include <stdio.h>

int main() {
    int arr[100], n, k;
    int i, comparisons = 0, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter key to search: ");
    scanf("%d", &k);

    for(i = 0; i < n; i++) {
        comparisons++;   
        if(arr[i] == k) {
            printf("Element found at position %d (1-based index)\n", i + 1);
            found = 1;
            break;
        }
    }

    if(!found) {
        printf("Element not found\n");
    }

    printf("Number of comparisons: %d\n", comparisons);

    return 0;
}
