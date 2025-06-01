#include <stdio.h>

int sumOdd(int n);

int main() {
    int a = 3;
    int result = sumOdd(a);
    printf("O resultado é %d\n", result);
    
    return 0;
}

int sumOdd(int n) {
    if (n == 0) {
        return 0;
    }

    return (2 * n - 1) + sumOdd(n - 1);
}