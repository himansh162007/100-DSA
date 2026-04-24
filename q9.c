#include <stdio.h>

// Recursive function
long long power(int a, int b) {
    if (b == 0)
        return 1;

    return a * power(a, b - 1);
}

int main() {
    int a, b;

    // Input
    scanf("%d %d", &a, &b);

    // Output
    printf("%lld", power(a, b));

    return 0;
}