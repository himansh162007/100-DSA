#include <stdio.h>

int main() {
    int n;

    // Read number of elements
    scanf("%d", &n);

    // Handle edge case
    if (n <= 0) {
        return 0;
    }

    int arr[1000];  // fixed size to avoid VLA issues

    // Read sorted array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Two-pointer approach
    int i = 0; // index of last unique element

    for (int j = 1; j < n; j++) {
        if (arr[j] != arr[i]) {
            i++;
            arr[i] = arr[j];
        }
    }

    // Print unique elements
    for (int k = 0; k <= i; k++) {
        printf("%d ", arr[k]);
    }

    return 0;
}