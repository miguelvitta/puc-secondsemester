#include <stdio.h>

double maiorDiferencaConsecutiva(int list[], int size);

int main() {
    int list[] = {1, 8, 12, 9, 11, 2, 14, 5, 10, 4};
    int size = 10;
    double result = maiorDiferencaConsecutiva(list, size);
    printf("A maior diferença entre elementos consecutivos é %.0f\n", result);
    return 0;
}

double maiorDiferencaConsecutiva(int list[], int size) {
    if (size < 2) return 0;
    double maiorDif = list[1] - list[0];
    for (int i = 1; i < size - 1; i++) {
        double difAtual = list[i + 1] - list[i];
        if (difAtual > maiorDif) {
            maiorDif = difAtual;
        }
    }
    return maiorDif;
}