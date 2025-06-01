#include <stdio.h>

int min(int array[], int n);

int main() {
    int array[] = {4, 7, 2, 9};
    int result = min(array, 4);
    printf("O resultado é %d\n", result);

    return 0;
}

int min(int array[], int n) {
    if (n == 1) {
        return array[0];
    }
    int previousMin = min(array, n - 1);

    if (array[n - 1] < previousMin) {
        return array[n - 1];
    }

    return previousMin;
}