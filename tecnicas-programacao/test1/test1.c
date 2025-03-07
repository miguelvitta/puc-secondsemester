#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 1001
#define ASCIILOWERMAX 122
#define ASCIILOWERMIN 97
#define ASCIILOWERUPPEROFFSET 32
#define ASCIIUPPERMAX 90
#define ASCIIUPPERMIN 65
#define ALPHABETSIZE 26

void toUpperCase(char* str, int len);
void countLetters(char* str, int* alphabet, int len);
void showCount(int* alphabet);

int main() {
    char* str = NULL;
    str = (char*)malloc(sizeof(char) * SIZE);

    fgets(str, SIZE, stdin);
    size_t len = strlen(str);
    
    toUpperCase(str, len);

    int* alphabet = NULL;
    alphabet = (int*)malloc(sizeof(int) * ALPHABETSIZE);

    countLetters(str, alphabet, len);

    showCount(alphabet);

    free(alphabet);
    free(str);
    return 0;
}

void toUpperCase(char* str, int len) {
    for (int i = 0; i < len; i++) {
        if (str[i] >= ASCIILOWERMIN && str[i] <= ASCIILOWERMAX) {
            str[i] -= ASCIILOWERUPPEROFFSET;
        }
    }
}

void countLetters(char* str, int* alphabet, int len) {
    for (int i = 0; i < ALPHABETSIZE; i++) {
        alphabet[i] = 0;
    }

    for (int i = 0; i < len; i++) {
        if (str[i] >= ASCIIUPPERMIN && str[i] <= ASCIIUPPERMAX) {
            int n = str[i] - ASCIIUPPERMIN;
            alphabet[n]++;
        }
    }
}

void showCount(int* alphabet) {
    for (int i = 0; i < ALPHABETSIZE; i++) {
        if (alphabet[i] > 0) {
            printf("%c: %d\n", i + ASCIIUPPERMIN, alphabet[i]);
        }
    }
}
