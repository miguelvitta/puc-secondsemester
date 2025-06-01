#include <stdio.h>

void insertSorted(int *arr, int *n, int x);

int main() {
    int arr[6] = {1, 3, 5, 7, 9};
    int n = 5;
    int x = 6;
    insertSorted(arr, &n, x);
    printf("Vetor ordenado após inserção de %d:\n", x);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void insertSorted(int *arr, int *n, int x) {
    int i = *n - 1;
    while (i >= 0 && arr[i] > x) {
        arr[i + 1] = arr[i];
        i--;
    }
    arr[i + 1] = x;
    (*n)++;
}
