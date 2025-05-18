#include <stdio.h>

int sum(int n);

int main() {
    int a = 4;
    int result = sum(a);
    printf("O resultado é %d\n", result);

    return 0;
}

int sum(int n) {
    if (n == 0) {
        return 0;
    }

    return n + sum(n - 1);
}