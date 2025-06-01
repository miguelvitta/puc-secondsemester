#include <stdio.h>

int ternarySearch(int lista[], int n, int x);

int main() {
    int lista[] = {1, 3, 5, 7, 9, 11, 13, 15}; // Lista em ordem crescente
    int n = 8; // Tamanho da lista
    int x = 7; // Elemento a procurar
    int resultado = ternarySearch(lista, n, x);
    if (resultado != -1) {
        printf("Elemento %d encontrado no índice %d.\n", x, resultado);
    } else {
        printf("Elemento %d não encontrado.\n", x);
    }
    return 0;
}

int ternarySearch(int lista[], int n, int x) {
    int esq = 0; // Início do intervalo
    int dir = n - 1; // Fim do intervalo

    while (esq <= dir) {
        if (esq == dir) { // Caso base: apenas um elemento
            if (lista[esq] == x) return esq;
            return -1;
        }

        // Calcula pontos de divisão
        int tam = dir - esq + 1;
        int meio1 = esq + tam / 3;
        int meio2 = dir - tam / 3;

        if (lista[meio1] == x) return meio1;
        if (lista[meio2] == x) return meio2;
        if (x < lista[meio1]) {
            dir = meio1 - 1; // Primeira sublista
        } else if (x > lista[meio2]) {
            esq = meio2 + 1; // Terceira sublista
        } else {
            esq = meio1 + 1; // Segunda sublista
            dir = meio2 - 1;
        }
    }

    return -1; // Elemento não encontrado
}