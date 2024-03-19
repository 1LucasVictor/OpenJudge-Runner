/*  ex9-2
    toshiwaka */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
    //1 ≤ N ≤ 10^5
    //入力の最大の要素数はSIZE+1
    char input[SIZE+1];
    //pop用
    char tmp;
    //入力の長さ,取り除くことができるキューブの数
    int len, count = 0;
    //最初のノードの指す先
    node *first = NULL;

    //入力
    scanf("%s", input);
    len = strlen(input);

    //判定後、スタックに格納
    for(int i = 0; i < len; i++){
      //スタックが空かどうか
      if(first == NULL){
        push(&first, input[i]);
      } else {
        tmp = pop(&first);
        //一致判定
        if(tmp == input[i]){
          push(&first, tmp);
          push(&first, input[i]);
        } else {
          count += 2;
        }
      }
    }

    //結果を出力
    printf("%d\n", count);

    return 0;
}