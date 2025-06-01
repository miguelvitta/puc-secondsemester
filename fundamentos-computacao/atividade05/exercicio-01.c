#include <stdio.h>

int factorial(int n);

int main() {
    int number = 5;
    int result = factorial(number);

    printf("O fatorial de %d é %d.\n", number, result);

    return 0;
}

int factorial(int n) {
    if (n == 0) {
        return 1;
    }

    return n * factorial(n - 1);
}