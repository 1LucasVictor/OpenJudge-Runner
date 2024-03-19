/* ex9_2:
    Jun_JPN*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 100000 // 10^5
typedef struct node{
    char color;
    struct node *next;
}node;

void push(node **top, char color);
void pop(node **top);

int main(void){
    node *top = NULL;   // 最初のノードは空
    char str[SIZE];
    int i, cnt=0;

    scanf("%s", str);   // 文字列を受け取る

    for(i=0; str[i] != '\0'; i++){
        if(top == NULL || top->color == str[i]){ // ノードtopが空もしくはstr[i]と同じ色だったら
            push(&top, str[i]);
        }else{          // 違う色だったら
            pop(&top);
            cnt += 2;   // 1回のポップで取り出すキューブは2個
        }
    }

    printf("%d\n", cnt);    // 結果を出力

    return 0;
}

void push(node **top, char color){
    node *new = calloc(1, sizeof(node));    // 追加するノード分のメモリを動的確保
    if(new == NULL) exit(1);    // メモリが確保できなかったら終了
    new->color = color;
    new->next = *top;   // ノードtopは1つ下のノードになる
    *top = new;         // ノードnewが新しくtopになる
}

void pop(node **top){
    node *tmp = *top;
    if(top == NULL) exit(1);    // ノードtopが空だったらポップできないので終了
    *top = tmp->next;   // ノードtopの1つ下のノードを新しくtopに
    free(tmp);          // 要らなくなったメモリを解放
}