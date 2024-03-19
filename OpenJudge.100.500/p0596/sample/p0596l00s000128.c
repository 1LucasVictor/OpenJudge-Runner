/* ex9_1
   Graku */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node {
    struct node *next;
    int binary;
}node;

int get_last(node *l);
node* pop(node *l);
node* push(node *l, int n);

int main() {
    node *list = NULL;
    int count = 0;
    char s[100000];
    scanf("%s", s);

    for (int i = 0; i < strlen(s); i++) {
        if (list == NULL) { //list is empty
            if (s[i] == '0') {
                list = push(list, 0); //list is "0"
            }
            else {
                list = push(list, 1); //list is "1"
            }
        }
        else if (list->binary == 0) {
            if (s[i] == '0') {
                list = push(list, 0); //end of list is "00"
            }
            else {
                list = pop(list); //end of list is "01" -> ""
                count += 2;
            }
        }
        else if (list->binary == 1) {
            if (s[i] == '0') {
                list = pop(list); //end of list is "10" -> ""
                count += 2;
            }
            else {
                list = push(list, 1); //end of list is "11"
            }
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

node* push(node *list, int n) {
    node *new = malloc(sizeof(node)); //new element
    new->next = list; //new is end of list
    new->binary = n;

    return new;
}