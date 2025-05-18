#include <stdio.h>

int mod(int x, int n, int m);

int main() {
    int x = 2;
    int n = 10;
    int m = 7;
    int result = mod(x, n, m);
    printf("O resultado é %d\n", result);

    return 0;
}

int mod(int x, int n, int m) {
    if (n == 0) {
        return 1;
    }

    return (mod(x, n - 1, m) * (x % m)) % m;
}