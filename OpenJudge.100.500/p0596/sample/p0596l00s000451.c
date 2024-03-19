/* ex 9_2
   nnasy */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//スタックに格納するデータの最大数
#define SIZE 100001

//リストのノード（スタック内の各データ）の定義
typedef struct node{
    char elem;
    struct node *next;
} node;

//スタックにデータを追加
void push(node **first, char elem){
    //追加する分の領域を確保
    node *new = calloc(1, sizeof(node));
    if(new == NULL) exit(1);
    new->elem = elem;
    new->next = *first;
    *first = new;
}

//スタックからデータを取り出す
char pop(node **first){
    char elem;
    node *tmp = *first;
    if(tmp == NULL) exit(1);
    elem = tmp->elem;
    *first = tmp->next;
    //取り出したノードのメモリを解放
    free(tmp);
    return elem;
}

int main(void){
    int count = 0;
    char input[SIZE];
    scanf("%s", input);
    //最初のノードの指す先
    node *first = NULL;

    for (int i=0; i<strlen(input); i++){
        if (first==NULL){
            push(&first, input[i]);
        }else{
            if (input[i]==first->elem){
                push(&first, input[i]);
            }else{
                pop(&first);
                count += 2;
            }
        }
    }

    printf("%d\n", count);
    return 0;
}