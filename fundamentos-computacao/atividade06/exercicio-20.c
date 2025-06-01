#include <stdio.h>

#define SIZE 8

void findMinMax(int *arr, int n, int *min, int *max);

int main() {
    int arr[] = {7, -3, 12, 0, 5, -8, 9, 4};
    int min, max;
    findMinMax(arr, SIZE, &min, &max);
    printf("Menor valor: %d\n", min);
    printf("Maior valor: %d\n", max);
    return 0;
}

void findMinMax(int *arr, int n, int *min, int *max) {
    *min = arr[0];
    *max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}
