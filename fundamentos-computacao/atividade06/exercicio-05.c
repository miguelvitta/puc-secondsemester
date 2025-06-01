#include <stdio.h>

#define NUMBER 12

void printRepeatedValues(int *arr, int n);

int main() {
    int arr[] = {9, 9, 7, 7, 7, 5, 4, 4, 3, 2, 2, 1};

    printRepeatedValues(arr, NUMBER);
    return 0;
}

void printRepeatedValues(int *arr, int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == arr[i + 1]) {
            if (i == 0 || arr[i] != arr[i - 1]) {
                printf("%d ", arr[i]);
            }
        }
    }
    printf("\n");
}