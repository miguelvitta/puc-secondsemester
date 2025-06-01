#include <stdio.h>

#define NUMBER 8

int findLastEvenPosition(int *arr, int n);

int main() {
    int arr[] = {3, 5, 7, 9, 2, 11, 13, 6};

    int pos = findLastEvenPosition(arr, NUMBER);
    printf("Última posição com número par: (Começa em 1 em vez de 0) %d\n",
           pos);

    return 0;
}

int findLastEvenPosition(int *arr, int n) {
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] % 2 == 0) {
            return i + 1;  // Índice baseado em 1
        }
    }
    return 0;  // 0 indica que nenhum número par foi encontrado
}
