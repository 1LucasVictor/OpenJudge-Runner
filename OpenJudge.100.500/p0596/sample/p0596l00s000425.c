/*  ex9_2
    Y_Aizaki  */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 100000

typedef struct node{
    char num;
    struct node *next;
}stack;

void push(stack **first, char elem);
char pop(stack **first);

int main(void){
    stack *stk;
    char input[SIZE];
    int i;
    int removed = 0; // 除かれたキューブの数

    scanf("%s", input);
    stk = NULL; // stkの初期化

    for (i=0;input[i]!='\0';i++){ // inputを前から見ていくループ
        if (stk == NULL){ // stkが空の時
            push(&stk, input[i]);
        }
        else{ // stkに要素があるとき
            if (stk->num != input[i]){ // inputで見ている要素と、stkの中身が違う時
                pop(&stk); // stkから消去
                removed += 2;
            }
            else{ // inputで見ている要素と、stkの中身が同じ時
                push(&stk, input[i]); // stkに追加
            }
        }
    }

    printf("%d\n", removed);

    return 0;
}

void push(stack **first, char elem){
    stack *new = calloc(1, sizeof(stack));
    if (new == NULL) exit(1);
    new->num = elem;
    new->next = *first;
    *first = new;
}


char pop(stack **first){
    char elem;
    stack *tmp = *first;
    if (tmp == NULL) exit(1);
    elem = tmp->num;
    *first = tmp->next;

    free(tmp);
    return elem;
}