/* ex_9_2
   seira3 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100001

//リストのノード（スタック内の各データ）の定義
typedef struct node{
    char elem;
    struct node *next;
} node;

//プロトタイプ宣言 
void push(node **first, char elem);
char pop(node **first);

int main(void){
    //宣言
    char cube[SIZE], pre_cube; //入力を受け取る配列を一つ前の文字を格納する変数を宣言
    int i, count = 0, ans = 0; 
    node *first = NULL; //スタック

    scanf("%s",cube); //入力
    for(i=0;i<strlen(cube);i++){ //cubeの各要素を処理
        if(count==0){ //空ならpush
            push(&first,cube[i]);
            count++;
        }
        else{
            pre_cube = pop(&first);
            if(pre_cube == cube[i]){ //一個前と同じならばpush
                push(&first,pre_cube);
                push(&first,cube[i]);
                count++;
            }
            else{ //一個前と違うならばansに2を足す
                ans+=2;
                count--;
            }
        }
    }
    printf("%d\n",ans); //答えを出力
    return 0;
}
 
//スタックにデータを追加
void push(node **first, char elem){
    //追加する分の領域を確保
    node *new = calloc(1, sizeof(node));
    if(new == NULL) exit(1); //確保できなければ強制終了
    new->elem = elem;
    new->next = *first;
    *first = new;
}
 
//スタックからデータを取り出す
char pop(node **first){
    char elem;
    node *tmp = *first;
    if(tmp == NULL) exit(1); //空なら強制終了
    elem = tmp->elem;
    *first = tmp->next;
    //取り出したノードのメモリを解放
    free(tmp);
    return elem;
}