#include <stdio.h>

#define NUMBER 8

int findMaxEvenPosition(int *arr, int n);

int main() {
    int arr[] = {3, 5, 7, 9, 2, 11, 13, 6};
    int pos = findMaxEvenPosition(arr, NUMBER);
    printf("Posição do maior número par (Começa em 1 em vez de 0): %d\n", pos);
    return 0;
}

int findMaxEvenPosition(int *arr, int n) {
    int biggerEven = 0, pos = 0, found = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            if (!found || arr[i] > biggerEven) {
                biggerEven = arr[i];
                pos = i + 1;  // Índice baseado em 1
                found = 1;
            }
        }
    }
    return pos;  // Se nenhum par foi encontrado, posicao permanece 0
}
