#include <stdio.h>

int findMode(int lista[], int n);

int main() {
    int lista[] = {1, 3, 3, 3, 5, 5, 7, 7, 7, 9}; 
    int n = 10; // Tamanho da lista
    int moda = findMode(lista, n);
    printf("A moda da lista é: %d\n", moda);
    return 0;
}

int findMode(int lista[], int n) {
    int moda = lista[0]; // Inicializa com o primeiro elemento
    int contagem_atual = 1; // Contagem do número atual
    int max_contagem = 1; // Maior contagem encontrada

    for (int i = 1; i < n; i++) {
        if (lista[i] == lista[i-1]) {
            contagem_atual++; // Mesmo número, incrementa contagem
        } else {
            contagem_atual = 1; // Novo número, reinicia contagem
        }
        if (contagem_atual > max_contagem) {
            max_contagem = contagem_atual; // Atualiza maior contagem
            moda = lista[i]; // Atualiza moda
        }
    }

    return moda;
}