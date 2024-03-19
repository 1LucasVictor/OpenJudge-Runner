/*  ex9_2
    urah  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LEN 100001

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
void pop(node **first){
    node *tmp = *first;
    if(tmp == NULL) exit(1);
    *first = tmp->next;
    //取り出したノードのメモリを解放
    free(tmp);
}


int main(void){
    char string[MAX_LEN];
    //最初のノードの指す先
    node *first = NULL;
    // 取り除いた回数
    int count = 0;

    scanf("%s", string);

    for (int i=0; i<strlen(string); i++){
        if (first != NULL && first->elem != string[i]){
            pop(&first);
            count += 2;
        } 
        else {
            push(&first, string[i]);
        }
    }

    printf("%d\n", count);

    return 0;
}