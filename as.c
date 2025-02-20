#include <stdio.h>

void troca (int a, int b);

int main() {
    int x = 5;

    int y = 25;

    //int* px = &x;
    /*
    printf(
        "The adress of x is %p, the adress of px is %p, the value of x is %d, "
        "the value of px is %p, the value of the variable pointed by px is %d\n",
        &x, &px, x, px, *px);
    */
    troca(x, y);
    printf("x = %d, y = %d\n", x, y);
}

void troca (int a, int b) {
    int aux = a;
    a = b;
    b = aux;
    printf("x = %d, y = %d\n", a, b);
}
