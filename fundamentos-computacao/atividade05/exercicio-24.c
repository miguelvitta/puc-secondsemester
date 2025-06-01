#include <stdio.h>

double power(double a, int n);

int main() {
    double a = 2.0;
    int n = 3;
    double result = power(a, n);
    printf("O resultado é %.0f\n", result);
    return 0;
}

double power(double a, int n) {
    if (n == 1) {
        return a * a; // Caso base: n=1 retorna a²
    }
    double temp = power(a, n - 1); // Calcula (a²)^(n-1)
    return a * a * temp; // Retorna a² * (a²)^(n-1)
}