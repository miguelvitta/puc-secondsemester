#include <stdio.h>

#define NUMBER 8

int countNegatives(int *arr, int n);

int main() {
    int arr[] = {4, -1, 0, -7, 2, -3, 5, -9};

    int negatives = countNegatives(arr, NUMBER);
    printf("Quantidade de negativos: %d\n", negatives);

    return 0;
}

int countNegatives(int *arr, int n) {
    int negatives = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            negatives++;
        }
    }

    return negatives;
}
