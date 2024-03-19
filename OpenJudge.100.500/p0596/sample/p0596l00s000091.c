/*  ex9_2
    suuxxu  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100000

typedef struct node{ // スタック内のデータの定義
    char data; // データの要素
    struct node *next; // 次のノードを表すポインタ
} node;

void push(node **head, char data); // スタックのpush操作
char pop(node **head); // スタックのpop操作

int main(void){
    int i, ans;
    char add, tmp, input[SIZE+1];

    // 先頭ノードをNULLに
    node *head = NULL;

    // 入力をinputに格納
    scanf("%s", input);

    ans = 0; // 答えを初期化
    for(i = 0; i < strlen(input); i++){
        add = input[i];
        if(head == NULL){ // 先頭ノードがNULLなら
            // 要素を追加
            push(&head, add);
        }else{
             // 今の先頭要素を取り出す
            tmp = pop(&head);
            if(add != tmp){ // 隣り合った要素が異なるなら
                // 要素は取り出したまま
                // 答えに2を追加
                ans += 2;
            }else{ // 隣り合った要素が等しいなら
                // 取り出した要素を戻す
                push(&head, tmp);
                // 次の要素を追加
                push(&head, add);
            }
        }
    }

    // 答えを出力
    printf("%d\n", ans);

    return 0;
}

// スタックのpush操作
void push(node **head, char data){
    node *new;

    // 追加する要素の領域を確保
    new = calloc(1, sizeof(node));
    if(new == NULL) exit(1);

    new->data = data; // newにノードの要素を格納
    new->next = *head; // newの次のノードを今の先頭ノードに
    *head = new; // 新しい先頭ノードをnewに
}

// スタックのpop操作
char pop(node **head){
    char data;

    node *tmp = *head;
    if(tmp == NULL) exit(1);

    data = tmp->data; // ノードの要素を取得
    *head = tmp->next; // 先頭ノードを次のノードにずらす

    // 取り出したノードのメモリを解放
    free(tmp);

    return data;
}