#include <stdio.h>

int square(int n);

int main() {
    int n = 4;
    int result = square(n);
    printf("O resultado é %d\n", result);
    return 0;
}

int square(int n) {
    if (n == 0) {
        return 0;
    }
    return square(n - 1) + 2 * (n - 1) + 1; // n² = (n-1)² + 2(n-1) + 1
}