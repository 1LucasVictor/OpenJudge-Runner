#include <stdio.h>
#include <string.h>

#define LEN 1046527

char dic[LEN][20] = {0};
int primeNumbers[] = {3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41};

unsigned int calcHash(char key[]) {
    unsigned int sum = 0;
    for (int i = 0; i < 20; i++) {
        sum += key[i] * primeNumbers[i];
    }

    unsigned int hash = sum % LEN;
    return hash;
}

int find(char key[]) {
    unsigned int hash = calcHash(key);

    if (strcmp(dic[hash], key) == 0) {
        return 1;

    } else {
        return 0;
    }
}

void insert(char key[]) {
    unsigned int hash = calcHash(key);

    int flag = 1;
    do {
        if (dic[hash][0] == '\0') {
            strcpy(dic[hash], key);
            flag = 0;

        } else {
            hash++;
        }
    } while (flag);
}

int main() {
    int N;
    scanf("%d", &N);

    char command[10] = {0};
    char key[20] = {0};

    for (int i = 0; i < N; i++) {
        scanf("%s %s", command, key);

        if (strcmp(command, "insert") == 0) {
            insert(key);

        } else if (strcmp(command, "find") == 0) {

            if (find(key)) {
                printf("yes\n");

            } else {
                printf("no\n");
            }

        } else {
            printf("this is invalid command.\n");
        }

        for (int j = 0; j < 20; j++) {
            key[j] = 0;
        }
    }

    return 0;
}

