#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[100000];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    int sum = 0;

    // Simple approach using nested loop (safe for exam)
    for (int i = 0; i < n; i++) {
        sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum == 0)
                count++;
        }
    }

    printf("%d", count);

    return 0;
}