#include <stdio.h>

int mult(int x, int y);

int main() {
    int x = 3, y = 4;
    int result = mult(x, y);
    printf("O resultado é %d\n", result);
    return 0;
}

int mult(int x, int y) {
    if (y == 0) {
        return 0;
    }
    if (y % 2 == 0) {
        return 2 * mult(x, y / 2); // y par: 2 * (x * (y/2))
    }
    return 2 * mult(x, y / 2) + x; // y ímpar: 2 * (x * ⌊y/2⌋) + x
}