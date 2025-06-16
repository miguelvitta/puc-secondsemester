#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME 256
#define TABLE_SIZE 100
#define DELETED_NODE (person*)(0xFFFFFFFFFFFFFFFFUL)

typedef struct {
    char name[MAX_NAME];
    int age;
} person;

person* hashTable[TABLE_SIZE];

bool initHashTable();
void printTable();
bool hashTableInsert(person* p);
person* hashTableLookup(char* name);
person* hashTableDelete(char* name);
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

    person* tmp = hashTableLookup("Mpho");
    if (tmp == NULL) {
        printf("Not found!\n");
    } else {
        printf("%s was found!\n", tmp->name);
    }

    tmp = hashTableLookup("Miguel");
    if (tmp == NULL) {
        printf("Not found!\n");
    } else {
        printf("%s was found!\n", tmp->name);
    }

    hashTableDelete("Michael");
    tmp = hashTableLookup("Michael");
    if (tmp == NULL) {
        printf("Not found!\n");
    } else {
        printf("%s was found!\n", tmp->name);
    }
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
    printf("Start:\n");
    for (int i = 0; i < TABLE_SIZE; i++) {
        if (hashTable[i] == NULL) {
            printf("\t%i\t---\n", i);
        } else if (hashTable[i] == DELETED_NODE) {
            printf("\t%i\t---<deleted>\n", i);
        }
        else {
            printf("\t%i\t%s\n", i, hashTable[i]->name);
        }
    }
    printf("End:\n");
}

bool hashTableInsert(person* p) {
    if (p == NULL) {
        return false;
    }
    unsigned int index = hash(p->name);
    for (int i = 0; i < TABLE_SIZE; i++) {
        int try = (i + index) % TABLE_SIZE;
        if (hashTable[try] == NULL || hashTable[try] == DELETED_NODE) {
            hashTable[try] = p;
            return true;
        }
    }
    return false;
}

person* hashTableLookup(char* name) {
    int index = hash(name);
    for (int i = 0; i < TABLE_SIZE; i++) {
        int try = (index + i) % TABLE_SIZE;
        if (hashTable[try] == NULL) {
            return false;
        }
        if (hashTable[try] == DELETED_NODE) {
            continue;
        }
        if (strncmp(hashTable[try]->name, name, TABLE_SIZE) == 0) {
            return hashTable[try];
        }
    }
    return NULL;
}

person* hashTableDelete(char* name) {
    int index = hash(name);
    for (int i = 0; i < TABLE_SIZE; i++) {
        int try = (index + i) % TABLE_SIZE;
        if (hashTable[try] == NULL) {
            return NULL;
        }
        if (hashTable[try] == DELETED_NODE) {
            continue;
        }
        if (strncmp(hashTable[try]->name, name, TABLE_SIZE) == 0) {
            person* tmp = hashTable[try];
            hashTable[try] = DELETED_NODE;
            return tmp;
        }
    }
    return NULL;
}

unsigned int hash(char* name) {
    size_t len = strnlen(name, MAX_NAME);
    unsigned int hashValue = 0;

    for (size_t i = 0; i < len; i++) {
        hashValue += name[i];
        hashValue = (hashValue * name[i]) % TABLE_SIZE;
    }

    return hashValue;
}
