#include <stdio.h>

double sum(int list[], int size);

int main() {
    int list[] = {1, 8, 12, 9, 11, 2, 14, 5, 10, 4};
    int size = 10;
    double result = sum(list, size);
    printf("A soma dos elementos da lista é %.0f\n", result);
    return 0;
}

double sum(int list[], int size) {
    double total = 0;
    for (int i = 0; i < size; i++) {
        total += list[i];
    }
    return total;
}