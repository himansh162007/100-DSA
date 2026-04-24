#include <stdio.h>

int main() {
    int p, q;

    // Input size of first array
    scanf("%d", &p);
    int a[p];

    // Input first sorted array
    for(int i = 0; i < p; i++) {
        scanf("%d", &a[i]);
    }

    // Input size of second array
    scanf("%d", &q);
    int b[q];

    // Input second sorted array
    for(int i = 0; i < q; i++) {
        scanf("%d", &b[i]);
    }

    int i = 0, j = 0;

    // Merge process
    while(i < p && j < q) {
        if(a[i] <= b[j]) {
            printf("%d ", a[i]);
            i++;
        } else {
            printf("%d ", b[j]);
            j++;
        }
    }

    // Remaining elements of a[]
    while(i < p) {
        printf("%d ", a[i]);
        i++;
    }

    // Remaining elements of b[]
    while(j < q) {
        printf("%d ", b[j]);
        j++;
    }

    return 0;
}