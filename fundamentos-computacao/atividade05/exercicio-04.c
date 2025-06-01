#include <stdio.h>

int modExp(int base, int exponent, int mod);

int main() {
    int result = modExp(2, 10, 7);
    printf("O resultado é %d\n", result);

    return 0;
}

int modExp(int base, int exponent, int mod) {
    if (exponent == 0) {
        return 1;
    }

    if (exponent % 2 == 0) {
        int temp = modExp(base, exponent / 2, mod);
        return (temp * temp) % mod;
    }
    
    return (base * modExp(base, exponent - 1, mod)) % mod;
}