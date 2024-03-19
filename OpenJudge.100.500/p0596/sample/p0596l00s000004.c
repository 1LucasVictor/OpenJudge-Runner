/* ex 9_2
   Stuartyg */

#include <stdio.h>
#include <stdlib.h>

//リストのノード（スタック内の各データ）の定義
typedef struct node{
    char elem;
    struct node *next;
} node;
//プロトタイプ宣言
void push(node **first, char elem);
char pop(node **first);


int main(void){
    //最初のノードの指す先
    node *first = NULL;
    char cube;
    int ans = 0;
    //1文字ずつ読み込み
    while((cube = getchar()) != EOF && (cube != '\n')){
        push(&first,cube);
    
        //00，01でないから先頭とその次を削除
        if((first->next != NULL) && (first->elem != first->next->elem)){
            pop(&first);
            pop(&first);
            ans += 2;
        }
    }
    printf("%d\n",ans);
    return 0;
}

//スタックにデータを追加
void push(node **first, char elem){
    //追加する分の領域を確保
    node *new = calloc(1, sizeof(node));
    if(new == NULL) exit(1); //確保失敗
    new->elem = elem;
    new->next = *first; //先頭に追加
    *first = new;
}

//スタックからデータを取り出す
char pop(node **first){
    char elem;
    node *tmp = *first;
    if(tmp == NULL) exit(1); //空リスト
    elem = tmp->elem;
    *first = tmp->next; //2個目を先頭に
    //取り出したノードのメモリを解放
    free(tmp);
    return elem;
}

