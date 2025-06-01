#include <stdio.h>

#define SIZE 10

int findFirstMaxPosition(int *arr, int n);

int main() {
    int arr[] = {4, 8, 2, 8, 6, 1, 8, 3, 7, 5};

    int pos = findFirstMaxPosition(arr, SIZE);
    printf("A primeira ocorrência do maior valor está na posição: %d\n", pos);

    return 0;
}

int findFirstMaxPosition(int *arr, int n) {
    int maxValue = arr[0];
    int pos = 0;

    for (int i = 1; i < n; i++) {
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            pos = i;
        }
    }
    return pos;
}
