#include <stdio.h>

int mdc(int a, int b);

int main() {
    int a = 12;
    int b = 17;
    int result = mdc(a, b);
    printf("O MDC de %d e %d é %d\n", a, b, result);

    return 0;
}

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    }

    return mdc(b, a % b);
}