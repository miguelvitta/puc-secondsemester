#include <stdio.h>

int mult(int n, int x);

int main() {
    int a = 3;
    int b = 4;
    int result = mult(a, b);
    printf("O resultado de %d * %d é %d\n", a, b, result);

    return 0;
}

int mult(int n, int x) {
    if (n == 0) {
        return 0;
    }
    
    return x + mult(n - 1, x);
}