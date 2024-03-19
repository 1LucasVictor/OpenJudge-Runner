/* ex9_2
    sak_Citrus  */

#include <stdio.h>
#include <stdlib.h>

//スタックの構造体
typedef struct node{
    char elem;
    struct node *next;
} node;

//リストの後ろ側に追加
void push(node **first,char elem){
    node *new = (node*)malloc(sizeof(node));
    if(new == NULL)exit(1);
    new->elem = elem;
    new->next = *first;
    *first = new;
}

//末端から取り出す
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
    char elem;
    int count = 0;
    node *first = NULL;
    while(1){
        elem = fgetc(stdin);
        if(elem == '\n' || elem == EOF)break;
        //スタックの先頭と照合し、消せるならpop、消せなければpush
        if(first != NULL && first->elem != elem){
            pop(&first);
            count++;
        }else{
            push(&first,elem);
        }
    }
    
    printf("%d\n",count*2);

    return 0;
}