#include <stdio.h>

long long sequenceRec(int n);

int main() {
    int n = 4;
    long long result = sequenceRec(n);
    printf("O resultado é %lld\n", result);
    return 0;
}

long long sequenceRec(int n) {
    if (n == 0) {
        return 1; // Caso base: a_0 = 1
    }
    if (n == 1) {
        return 3; // Caso base: a_1 = 3
    }
    if (n == 2) {
        return 5; // Caso base: a_2 = 5
    }
    long long an1 = sequenceRec(n - 1);
    long long an2 = sequenceRec(n - 2);
    long long an3 = sequenceRec(n - 3);
    return an1 * (an2 * an2) * (an3 * an3 * an3); // a_n = a_(n-1) * a_(n-2)^2 * a_(n-3)^3
}