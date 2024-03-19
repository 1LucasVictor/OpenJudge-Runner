/* ex 9_2
   kohei0713 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
void pop(node **first){
    char elem;
    node *tmp = *first;
    if(tmp == NULL) exit(1);
    elem = tmp->elem;
    *first = tmp->next;
    //取り出したノードのメモリを解放
    free(tmp);
}

int main(void){
    int count = 0, i;
    char cube[SIZE];
    //最初のノードの指す先
    node *first = NULL;

    //input
    scanf("%s", cube);

    for(i = 0; i < strlen(cube); i++){
        if(first == NULL || cube[i] == first->elem){
            //スタックにノードを追加
            push(&first, cube[i]);
        }else{
            //スタックからデータを取り出し,countに2を足す
            pop(&first);
            count = count + 2;
        }
    }

    //countを表示
    printf("%d\n", count);

    return 0;
}