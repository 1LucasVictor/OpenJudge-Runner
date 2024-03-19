/* ex9_2
   YSK722 */

#include <stdio.h>
#include <stdlib.h>
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
    if (new == NULL)
        exit(1);
    new->elem = elem;
    new->next = *first;
    *first = new;
}

//スタックからデータを取り出す
char pop(node **first){
    char elem;
    node *tmp = *first;
    if (tmp == NULL)
        exit(1);
    elem = tmp->elem;
    *first = tmp->next;
    //取り出したノードのメモリを解放
    free(tmp);
    return elem;
}

int main(void){
    char text[SIZE], top;
    int i = 0, count = 0;
    //最初のノードの指す先
    node *first = NULL;
    scanf("%s", text);
    while (text[i] != '\0'){
        // 最初にfirstに要素を追加
        if (first == NULL){
            push(&first, text[i]);
            i++;
            continue;
        }
        top = pop(&first);
        if (text[i] != top)
            // topが要素と等しくないとき、countに2を足す
            count += 2;
        else{
            //スタックにノードを追加
            push(&first, top);
            push(&first, text[i]);
        }
        i++;
    }
    printf("%d\n", count);
    return 0;
}