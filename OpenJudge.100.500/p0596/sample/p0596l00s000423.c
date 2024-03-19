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
    //count: 取り除いたキューブの数
    int count = 0;
    //input: 入力文字列
    char input[SIZE];
    //入力
    scanf("%s", input);
    //最初のノードの指す先
    node *first = NULL;

    //取り除くキューブの数の計算
    for (int i=0; i<strlen(input); i++){
        //比較対象がないとき文字を入れるだけ
        if (first==NULL){
            push(&first, input[i]);
        }else{
            //文字が異なるときはその文字を入れる
            if (input[i]==first->elem){
                push(&first, input[i]);
            //文字が同じときは手前の文字を除き、カウントを増やす
            }else{
                pop(&first);
                count += 2;
            }
        }
    }

    //出力
    printf("%d\n", count);
    
    return 0;
}