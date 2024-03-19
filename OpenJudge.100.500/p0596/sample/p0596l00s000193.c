/* ex9_2
    sachiyan*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    if(tmp == NULL) return -1;
    elem = tmp->elem;
    *first = tmp->next;
    //取り出したノードのメモリを解放
    free(tmp);
    return elem;
}

int main(void){
    char string[100001];
    char i;
    char last;
    int count;
    //最初のノードの指す先
    node *first = NULL;

    //文字列を読み込む
    scanf("%s", &string);
    //消されたキューブの個数を初期化
    count = 0;

    //１つ１つのキューブについて考える
    for(i=0; i< strlen(string); i++){
        //スタックの最後を取り出す
        last = pop(&first);
        //最後のキューブが次の文字と同じかない場合
        if(last == string[i] || last == -1){
            //前のキューブと後ろのキューブがスタックの入る
            push(&first, last);
            push(&first, string[i]);
        }else{
            //前のキューブも後ろのキューブもスタックに入らない
            //消されたブロックが2増える
            count +=2;
        }
    }
    //答えの出力
    printf("%d\n", count);
    return 0;
}
