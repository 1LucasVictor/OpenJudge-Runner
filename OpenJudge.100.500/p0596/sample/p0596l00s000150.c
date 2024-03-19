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
    //最初のノードの指す先
    node *first = NULL;
    char cube;
    int ret = 0;

    //1文字ずつ標準入力を受け取る。
    while(scanf("%c", &cube) != EOF && cube != '\n'){
        //スタックにノードを追加
        push(&first, cube);
        
        if((first->next != NULL) && (first->elem != first->next->elem)){
            //スタックから2つのデータを取り出す。
            pop(&first);
            pop(&first);
            //2つキューブを取り除いたのでカウントする
            ret += 2;
        }
    }
    printf("%d\n", ret);
    return 0;
}