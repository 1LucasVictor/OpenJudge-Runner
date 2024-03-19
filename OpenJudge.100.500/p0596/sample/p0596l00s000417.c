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
    int i = 0,counter = 0,ans = 0;
    //入力を受け取る配列をヌル文字分まで確保
    char color,tmp[SIZE + 1];
    //最初のノードの指す先
    node *first = NULL;
    scanf("%s", tmp);
    //スタックにノードを追加
    while(tmp[i] != '\0'){
        push(&first, tmp[i]);
        i++;
    }
    //一つ目と色が違うものがpopされるまでpopして同じ色だった分だけpushし直す。もしスタック内全て同じ色ならpopしきって終了
    while(1){
        color = pop(&first);
        while(first != NULL){
            if(color != pop(&first)){
                for(i=0; i < counter; i++){
                    push(&first, color);
                }
                ans = ans + 2;
                break;
            }else{
                counter++;
            }
        }
        //firstがこの時NULLならスタック内全て同じ色だったということなのでwhile脱出
        if(first == NULL){
            break;
        }
        counter = 0;
    }
    printf("%d\n", ans);
    return 0;
}