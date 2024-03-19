/*  ex9_2
    takafumi_ueki */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100001
//リストのノードの定義
typedef struct node{
    char elem;
    struct node *next;
}node;
//プロトタイプ宣言
void push(node **first, char elem);
char pop(node **first);

int main(void){
    char cubes[SIZE],top;
    int i,num;
    int count = 0;
    //リストの先頭が指す先
    node *first = NULL;
    //cubeの状態を入力する
    scanf("%s",cubes);
    num = strlen(cubes);
    //状態の読み込み
    for(int i=0; i<num; i++)
        //空であればpushする。
        //追加予定の要素が先頭の要素と同じであればスタックにノードを追加する
        if(first == NULL || first->elem == cubes[i]){
            push(&first, cubes[i]);
        }
        //異なっている場合はスタックの先頭ノードを取り出す
        else if(first->elem != cubes[i]){
            top = pop(&first);
            count += 2;
        }
    //結果を出力する
    printf("%d\n", count);
    return 0;
}
//スタックにデータを追加する
void push(node **first, char elem){
    //領域の確保
    node *new = calloc(1, sizeof(node));
    if (new == NULL){
        exit(1);
    }
    //新しいデータの要素がelemで、それに続くものはfirst
    new->elem = elem;
    new->next = *first;
    //新しいノードが一番目に
    *first = new;
}
//スタックからデータを取り出す
char pop(node **first){
    char elem;
    node *tmp = *first;
    //空ならエラー
    if (tmp == NULL){
        exit(1);
    }
    //elemを次のノードに移動
    elem = tmp->elem;
    *first = tmp->next;
    //メモリを解放する
    free(tmp);
    return elem;
}