/* ex9_2
   Graku */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node {
    struct node *next;
    char binary;
}node;

int get_last(node *l);
node* pop(node *l);
node* push(node *l, char n);

int main(void) {
    node *list = NULL;
    int count = 0;
    char s[100000];
    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++) {
        if (list == NULL) { //list is empty
            list = push(list, s[i]);
        }
        else if (list->binary != s[i]) { //end of list is "01" or "10"
            list = pop(list);
            count += 2;
        }
        else { //end of list is "00" or "11"
            list = push(list, s[i]);
        }
    }

    printf("%d\n", count);
    return 0;
}

node* pop(node *list) {
    if (list == NULL) { //list is empty
        printf("Error: list is NULL\n");
        exit(1);
    }
    if (list->next == NULL) { //list has one element
        return NULL; //list is empty
    }
    node *head = list->next;
    free(list);
    return head;
}

node* push(node *list, char c) {
    node *new = malloc(sizeof(node)); //new element
    new->next = list; //new is end of list
    new->binary = c;
    return new;
}