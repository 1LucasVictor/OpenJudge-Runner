/* ex9_2
  terakura */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
    char cube[SIZE];
    int count = 0;
    //最初のノードの指す先
    node *first = NULL;
    scanf("%s", cube);

    for(int i=0; i<strlen(cube); i++){

        //最初のキューブまたは前と同じいろ
        if(first == NULL || cube[i] == first->elem){
            //スタックにノードを追加
            push(&first, cube[i]);
        }
        //一つ前と色が異なる
        else{
            //スタックからデータを取り出す
            pop(&first);
            count += 2;
        }
    }

    printf("%d\n", count);


    return 0;
}
