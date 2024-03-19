/* ex 9_2
   riverstone */

#include <stdio.h>
#include <stdlib.h>

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
    char tmp;
    //最初のノードの指す先
    node *first = NULL;
    int ret = 0;

    //1文字ずつ標準入力から受け取り以下を実行
    while(scanf("%c", &tmp) != EOF && tmp != '\n'){
        //まずスタックにノードを追加
        push(&first, tmp);
        
        //2個以上のキューブが積まれており、かつ、上から2個のキューブの色が異なるとき
        if((first->next != NULL) && (first->elem != first->next->elem)){
            //スタックから2つのデータを取り出し、取り除いたキューブの個数をカウントする
            pop(&first);
            pop(&first);
            ret += 2;
        }
    }
    printf("%d\n", ret);
    return 0;
}