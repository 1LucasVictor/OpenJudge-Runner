/*  ex9_2
    Y_Aizaki  */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 12000

typedef struct node{
    char elem;
    struct node *next;
}stack;

void push(stack **first, char elem);
char pop(stack **first);

int main(void){
    stack *stk;
    char input[SIZE];
    char *input_p = input;
    int removed = 0; // 除かれたキューブの数

    scanf("%s", input_p);
    stk = NULL; // stkの初期化

    while (*input_p != '\0'){ // inputを前から見ていくループ
        if (stk == NULL){ // stkが空の時
            push(&stk, *input_p);
        }
        else{ // stkに要素があるとき
            if (stk->elem != *input_p){ // inputで見ている要素と、stkの中身が違う時
                pop(&stk); // stkから消去
                removed += 2;
            }
            else{ // inputで見ている要素と、stkの中身が同じ時
                push(&stk, *input_p); // stkに追加
            }
        }
        input_p++;
    }

    printf("%d\n", removed);

    return 0;
}

void push(stack **first, char elem){
    stack *new = calloc(1, sizeof(stack));
    if (new == NULL) exit(1);
    new->elem = elem;
    new->next = *first;
    *first = new;
}


char pop(stack **first){
    char elem;
    stack *tmp = *first;
    if (tmp == NULL) exit(1);
    elem = tmp->elem;
    *first = tmp->next;

    free(tmp);
    return elem;
}