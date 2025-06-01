#include <stdio.h>

int mdc(int a, int b);

int main() {
    int a = 8, b = 12;
    int result = mdc(a, b);
    printf("O resultado é %d\n", result);
    return 0;
}

int mdc(int a, int b) {
    if (a == 0) {
        return b; // Caso base: a=0 retorna b
    }
    if (b < a) {
        return mdc(b, a); // Garante a < b
    }
    return mdc(a, b - a);
}