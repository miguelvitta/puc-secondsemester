#include <stdio.h>

long long sequenceIter(int n);

int main() {
    int n = 4;
    long long result = sequenceIter(n);
    printf("O resultado é %lld\n", result);
    return 0;
}

long long sequenceIter(int n) {
    if (n == 0) return 1;
    if (n == 1) return 3;
    if (n == 2) return 5;

    long long seq[n + 1];
    seq[0] = 1;
    seq[1] = 3;
    seq[2] = 5;

    for (int i = 3; i <= n; i++) {
        seq[i] = seq[i - 1] * (seq[i - 2] * seq[i - 2]) * (seq[i - 3] * seq[i - 3] * seq[i - 3]);
    }
    return seq[n];
}