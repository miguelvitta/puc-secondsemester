#include <stdio.h>

#define SIZE 7

int isPalindrome(char *arr, int n);

int main() {
    char arr[] = {'r', 'a', 'd', 'a', 'r', 'a', 'r'};

    if (isPalindrome(arr, SIZE)) {
        printf("A sequência é um palíndromo.\n");
    } else {
        printf("A sequência não é um palíndromo.\n");
    }

    return 0;
}

int isPalindrome(char *arr, int n) {
    for (int i = 0; i < n / 2; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            return 0;  
        }
    }

    return 1;
}