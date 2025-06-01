#include <stdio.h>

void processThreeIntegers(int a, int b, int c);

int main() {
    int a = 7, b = 3, c = 5;

    processThreeIntegers(a, b, c);

    return 0;
}

void processThreeIntegers(int a, int b, int c) {
    int max = a;
    int min = a;
    if (b < min) {
        min = b;
    }
    if (c < min) {
        min = c;
    }
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    int med;
    if ((a != min && a != max) || (a == b && a != c) || (a == c && a != b)) {
        med = a;
    } else if ((b != min && b != max) || (b == c && b != a)) {
        med = b;
    } else {
        med = c;
    }
    float media = (a + b + c) / 3.0;
    printf("Mínimo: %d\n", min);
    printf("Mediano: %d\n", med);
    printf("Máximo: %d\n", max);
    printf("Média: %.2f\n", media);
}
