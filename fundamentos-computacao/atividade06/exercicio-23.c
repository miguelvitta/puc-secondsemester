#include <stdio.h>
#include <stdbool.h>

bool isSurjective(int B[], int f[], int n, int m);

int main() {
    int A[] = {1, 2, 3, 4}; // Domain (not passed to function, kept for reference)
    int B[] = {5, 6, 7};    // Codomain
    int f[] = {5, 6, 5, 7}; // Function: f(1)=5, f(2)=6, f(3)=5, f(4)=7
    int n = 4; // Size of domain
    int m = 3; // Size of codomain
    if (n < 1 || m < 1) {
        printf("Domínio ou contradomínio inválido.\n");
        return 1;
    }
    bool result = isSurjective(B, f, n, m);
    printf("A função é %s.\n", result ? "sobrejetiva" : "não sobrejetiva");
    return 0;
}

bool isSurjective(int B[], int f[], int n, int m) {
    for (int j = 0; j < m; j++) { // For each element in B
        bool found = false;
        for (int i = 0; i < n; i++) { // Check if B[j] appears in f
            if (f[i] == B[j]) {
                found = true; // Set flag if found
            }
        }
        if (!found) {
            return false; // B[j] is not in the image of f
        }
    }
    return true; // All elements of B were found
}