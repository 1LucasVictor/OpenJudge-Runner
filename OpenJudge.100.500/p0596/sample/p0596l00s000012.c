/* ex 9_1
   アカウント名 */

#include <stdio.h>
#include <stdlib.h>


typedef struct node{
    char elem;
    struct node *next;
} node;

void push(node **first, char elem){
    node *new = calloc(1, sizeof(node));
    if(new == NULL) exit(1);
    new->elem = elem;
    new->next = *first;
    *first = new;
}

char pop(node **first){
    char elem;
    node *tmp = *first;
    if(tmp == NULL) exit(1);
    elem = tmp->elem;
    *first = tmp->next;
    free(tmp);
    return elem;
}


int main(void){
    char str[100001];
    char tmp, *ptr;
    int removed_num = 0;
    node *first = NULL;
    scanf("%s", str);
    ptr = str;
    while(*ptr != '\0'){
        if(first == NULL){
            push(&first, *ptr);
        }
        else if((*first).elem != *ptr){
            tmp = pop(&first);
            removed_num += 2;
        }
        else{
            push(&first, *ptr);
        }
        ptr++;
    }
    printf("%d\n", removed_num);
    return 0;
}
