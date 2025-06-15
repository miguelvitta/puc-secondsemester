#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 256
#define TABLE_SIZE 320

typedef struct {
    char name[MAX_NAME];
    int age;
} person;

person* hashTable[TABLE_SIZE];

bool initHashTable();
void printTable();
bool hashTableInsert(person* p);
unsigned int hash(char* name);

int main() {
    initHashTable();

    person jacob = {.name = "Jacob", .age = 256};
    person natalie = {.name = "Natalie", .age = 0};
    person sara = {.name = "Sara", .age = 0};
    person michael = {.name = "Michael", .age = 0};
    person maria = {.name = "Maria", .age = 0};
    person alice = {.name = "Alice", .age = 0};
    person arthur = {.name = "Arthur", .age = 0};
    person danyEvelyn = {.name = "Dany Evelyn", .age = 0};
    person miguel = {.name = "Miguel", .age = 0};
    person victorHugo = {.name = "Victor Hugo", .age = 0};
    person aime = {.name = "Aime", .age = 0};
    person paula = {.name = "Paula", .age = 0};
    person ighor = {.name = "Ighor", .age = 0};
    person kaique = {.name = "Kaique", .age = 0};
    person natalia = {.name = "Natalia", .age = 0};
    person lucas = {.name = "Lucas", .age = 0};
    person renato = {.name = "Renato", .age = 0};
    person bernardo = {.name = "Bernardo", .age = 0};
    person laura = {.name = "Laura", .age = 0};
    person lara = {.name = "Lara", .age = 0};
    person luiza = {.name = "Luiza", .age = 0};
    person andre = {.name = "Andre", .age = 0};
    person vinicius = {.name = "Vinicius", .age = 0};
    person camila = {.name = "Camila", .age = 0};
    person herminia = {.name = "Herminia", .age = 0};
    person benjamim = {.name = "Benjamim", .age = 0};
    person gabriel = {.name = "Gabriel", .age = 0};

    hashTableInsert(&jacob);
    hashTableInsert(&natalie);
    hashTableInsert(&sara);
    hashTableInsert(&michael);
    hashTableInsert(&maria);
    hashTableInsert(&alice);
    hashTableInsert(&arthur);
    hashTableInsert(&danyEvelyn);
    hashTableInsert(&miguel);
    hashTableInsert(&victorHugo);
    hashTableInsert(&aime);
    hashTableInsert(&paula);
    hashTableInsert(&ighor);
    hashTableInsert(&kaique);
    hashTableInsert(&natalia);
    hashTableInsert(&lucas);
    hashTableInsert(&renato);
    hashTableInsert(&bernardo);
    hashTableInsert(&laura);
    hashTableInsert(&lara);
    hashTableInsert(&luiza);
    hashTableInsert(&andre);
    hashTableInsert(&vinicius);
    hashTableInsert(&camila);
    hashTableInsert(&herminia);
    hashTableInsert(&benjamim);
    hashTableInsert(&gabriel);

    printTable();
    return 0;
}

bool initHashTable() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        hashTable[i] = NULL;
    }
    return true;
}

void printTable() {
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (hashTable[i] == NULL) {
            printf("\t%i\t---\n", i);
        } else {
            printf("\t%i\t%s\n", i, hashTable[i]->name);
        }
    }
}

bool hashTableInsert(person* p) {
    if (p == NULL) {
        return false;
    }
    int index = hash(p->name);
    if (hashTable[index] != NULL) {
        fprintf(stderr, "A collision happened at index %d with name \"%s\" (already occupied by \"%s\")\n", index, p->name, hashTable[index]->name);
        return false;
    }
    hashTable[index] = p;
    return true;
}

unsigned int hash(char* name) {
    int len = strnlen(name, MAX_NAME);
    unsigned int hashValue = 0;

    for (int i = 0; i < len; i++) {
        hashValue += name[i];
        hashValue = (hashValue * name[i]) % TABLE_SIZE;
    }

    return hashValue;
}
