/*  ex9_2
    potter0723sw  */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100000

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
    int i = 0,ans = 0;
    //入力を受け取る配列をヌル文字分まで確保
    char color,block[SIZE + 1];
    //最初のノードの指す先
    node *first = NULL;
    scanf("%s", block);
    //blockを順番に見ていってもしスタックに何も入っていないかスタックの先頭と同じ色だったらスタックに入れていく。
    while(block[i] != '\0'){
        if(first == NULL || first->elem == block[i]){
            push(&first, block[i]);
        }else{
            pop(&first);
            ans += 2;
        }
        i++;
    }
    printf("%d\n", ans);
    return 0;
}
