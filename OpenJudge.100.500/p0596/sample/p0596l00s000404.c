#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define SIZE 100010

typedef struct node {
    char elem;
    struct node *next;
} node;

void push(node **first, char elem) {
    node *new = (node *)malloc(sizeof(node));
    if(new == NULL) exit(1);
    new->elem = elem;
    new->next = *first;
    *first = new;
}

char pop(node **first) {
    char elem;
    node *tmp = *first;
    if(tmp == NULL) exit(1);
    elem = tmp->elem;
    *first = tmp->next;
    free(tmp);
    return elem;
}

int main() {
    char s[SIZE] = {'\0'};
    char popped;
    int num_red = 0, num_blue = 0;
    int popped_num = 0;
    node *first;

    scanf("%s", s);
    for(int i = 0; i < strlen(s); i++) {
        push(&first, s[i]);
    }

    while(first != NULL) {
        popped = pop(&first);
        if(popped == '0') num_red++;
        else              num_blue++;
    }
    popped_num = (num_red < num_blue) ? num_red : num_blue;
    popped_num *= 2;

    printf("%d\n", popped_num);

    return 0;
}
