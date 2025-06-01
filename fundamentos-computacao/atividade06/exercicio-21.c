#include <stdio.h>

#define SIZE 8

void sortFirstThree(int *arr);

int main() {
    int arr[] = {7, 3, 5, 10, 2, 9, 8, 1};
    sortFirstThree(arr);
    printf("Vetor após ordenar os três primeiros elementos:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

void sortFirstThree(int *arr) {
    if (arr[0] > arr[1]) {
        int temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    }
    if (arr[1] > arr[2]) {
        int temp = arr[1];
        arr[1] = arr[2];
        arr[2] = temp;
    }
    if (arr[0] > arr[1]) {
        int temp = arr[0];
        arr[0] = arr[1];
        arr[1] = temp;
    }
}
