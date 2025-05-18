#include <stdio.h>

int max(int array[], int n);

int main() {
    int array[] = {4, 7, 2, 9};
    int result = max(array, 4);
    printf("O resultado é %d\n", result);

    return 0;
}

int max(int array[], int n) {
    if (n == 1) {
        return array[0];
    }
    int previousMax = max(array, n - 1);

    if (array[n - 1] > previousMax) {
        return array[n - 1];
    }

    return previousMax;
}