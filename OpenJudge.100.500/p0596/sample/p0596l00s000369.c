/* ex 9_2
   kohei_suzuki */

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
    char cube[SIZE];
    int count = 0;
    node *first = NULL;//最初のノードの指す先
    
    scanf("%s", cube);//入力受取

    for(int i=0; i<strlen(cube); i++){
        if(first != NULL){
            if(cube[i] == first->elem){//前の要素(キューブ)と異なるときはスタックにノードを追加する
                push(&first, cube[i]);
            }
            else{//前の要素(キューブ)と異なるときにスタックからノードを取り出す
                pop(&first);
                count += 2;//一回取り出すごとに２つのキューブをとりだしている。
            }
        }
        else{//初期状態のノードにデータを追加
            push(&first, cube[i]);
        }
    }
    printf("%d", count);
    return 0;
}