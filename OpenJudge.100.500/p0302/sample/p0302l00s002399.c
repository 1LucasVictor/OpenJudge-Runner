#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

int char2int(char in);
long str2long(char *in_str);
void insert(long *dict, char *in_str);
bool find(long *dict, char *target_str);

int num_inserted = 0;

int main(void)
{
    int num_op;
    scanf("%d", &num_op);

    long *dict;
    dict = malloc(sizeof(long) * num_op);

    char op[6];
    char word_str[13];

    while (num_op--) {
        scanf("%s %s", op, word_str);
        if (strcmp(op, "insert") == 0) {
            insert(dict, word_str);
        } else if (strcmp(op, "find") == 0) {
            bool yn = find(dict, word_str);
            if (yn == true) {
                printf("yes\n");
            } else {
                printf("no\n");
            }
        } else {
            printf("ERROR! main\n");
        }
    }

    return 0;
}

int char2int(char in)
{
    if (in == 'A') {
        return 1;
    } else if (in == 'C') {
        return 2;
    } else if (in == 'G') {
        return 3;
    } else if (in == 'T') {
        return 4;
    } else {
        printf("ERROR! char2int\n");
        return -1;
    }
}

long str2long(char *in_str)
{
    int i;
    int p = 1;
    int in_long = 0;
    for (i = 0; i < (int)(strlen(in_str)); i++) {
        in_long += p * char2int(in_str[i]);
        p *= 5;
    }

    return in_long;
}

void insert(long *dict, char *in_str)
{
    dict[num_inserted++] = str2long(in_str);
}

bool find(long *dict, char *target)
{
    int i;
    for (i = 0; i < num_inserted; i++) {
        if (dict[i] == str2long(target)) {
            return true;
        }
    }
    return false;
}