/* ex 9_2
   KKOO */

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
    char decoy, cube[SIZE];
    int num, count=0;
    //最初のノードの指す先
    node *first = NULL;

    scanf("%s", cube);
    num = strlen(cube);

    for(int i=0; i<num; i++){
        //追加しようとしている要素が先頭の要素と同じであればスタックにノードを追加
        if(first == NULL || first->elem == cube[i]){
            push(&first, cube[i]);
        }
        //追加しようとしている要素が先頭の要素と異なっていればスタックの先頭ノードを取り出す
        else if(first->elem != cube[i]){
            decoy = pop(&first);
            count += 2;
        }
    }

    printf("%d\n", count);

    return 0;
}
