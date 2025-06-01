#include <stdio.h>

int sequence(int n);

int main() {
    int n = 4;
    int result = sequence(n);
    printf("O resultado é %d\n", result);
    return 0;
}

int sequence(int n) {
    if (n == 0) {
        return 1; // Caso base: a_0 = 1
    }
    if (n == 1) {
        return 2; // Caso base: a_1 = 2
    }
    if (n == 2) {
        return 3; // Caso base: a_2 = 3
    }
    return sequence(n - 1) + sequence(n - 2) + sequence(n - 3); // a_n = a_(n-1) + a_(n-2) + a_(n-3)
}