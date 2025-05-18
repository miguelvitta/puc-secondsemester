#include <stdio.h>

int fatMod(int n, int m);

int main() {
    int n = 5;
    int m = 7;
    int result = fatMod(n, m);
    printf("O resultado é %d\n", result);
    return 0;
}

int fatMod(int n, int m) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return (n * fatMod(n - 1, m)) % m;
}