#include <stdio.h>

int countFrequency(int array[], int n, int valor);
int moda(int array[], int n);

int main() {
    int array[] = {2, 1, 2, 3};
    int result = moda(array, 4);
    printf("O resultado é %d\n", result);
    return 0;
}

int countFrequency(int array[], int n, int valor) {
    if (n == 0) {
        return 0;
    }
    return (array[n-1] == valor ? 1 : 0) + countFrequency(array, n-1, valor);
}

int moda(int array[], int n) {
    if (n == 1) {
        return array[0];
    }
    int moda_anterior = moda(array, n-1);
    int freq_ultimo = countFrequency(array, n, array[n-1]); 
    int freq_moda_anterior = countFrequency(array, n, moda_anterior);
    if (freq_ultimo >= freq_moda_anterior) {
        return array[n-1];
    }
    return moda_anterior;
}