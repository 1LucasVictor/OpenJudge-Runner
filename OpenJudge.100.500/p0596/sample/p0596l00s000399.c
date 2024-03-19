/*  ex9_2
    pptenshi  */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100000


typedef struct stack {
    char elem;
    struct stack *next;
}stack;


void push(stack **first, char elem)  {
    stack *new = calloc(1, sizeof(stack));
    if (new == NULL) exit(1);

    new->elem = elem;
    new->next = *first;
    *first = new;
}


char pop(stack **first) {
    char elem;
    stack *tmp = *first;

    if (tmp == NULL) exit(1);

    elem = tmp->elem;
    *first = tmp->next;
    free(tmp);
    return elem;
}


int main(void) {
    char string[SIZE];    // S
    int len_string;       // N
    int num_remove = 0;   // 取り除く数
    stack *first = NULL;  // キューブを積むスタック


    // input 
    scanf("%s", string);
    len_string = strlen(string);

    
    // calculate
    for (int i = 0; i < len_string; i++) {
        
        // スタックに要素がない場合
        if (first == NULL) {
            push(&first, string[i]);
            continue;
        }

        // スタックの先頭と積み木のi番目を比較
        char first_elem = first->elem;
        if (first_elem != string[i]) {
            // 異なる場合は先頭を削除しカウント
            pop(&first);
            num_remove += 2;
        } else {
            // 同じ場合は追加
            push(&first, string[i]);
        }

    }


    // output
    printf("%d\n", num_remove);

    return 0;
}
