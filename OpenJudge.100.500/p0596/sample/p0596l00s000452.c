/* ex 9_2
   riverstone */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100001

//リストのノード（スタック内の各データ）の定義
typedef struct node{
    char elem;
    struct node *next;
} node;

void push(node **first, char elem);
char pop(node **first);

int main(void){
    //最初のノードの指す先
    node *first = NULL;
    int i,ret = 0;
    //入力する配列を定義
    char cube_input[SIZE];
    scanf("%s", cube_input);
    
    for (i=0;i<strlen(cube_input);i++){
        //最初のキューブ、及び赤色のキューブと青色のキューブが隣り合っている時
        if (first == NULL || cube_input[i] == first -> elem){
            //スタックにプッシュする。
            push(&first, cube_input[i]);
        }

        //隣り合っていない場合はそのまま追加
        else{
            //スタックからデータを取り出す。
            pop(&first);
            //2つキューブを取り除けたことになる
            ret += 2;
        }
    }
    printf("%d\n", ret);
    return 0;
}

//スタックにデータを追加
//先頭を示すノードと追加するデータを引数にする
void push(node **first, char elem){
    //追加する分の領域を確保
    node *new = calloc(1, sizeof(node));
    if(new == NULL){
        exit(1);
    }

    //新しいノード(要素と次の要素のポインタのセット)を作る
    new->elem = elem;
    new->next = *first;
    //先頭のノードを新しく作ったノードにする。
    *first = new;
}

//スタックからデータを取り出す
char pop(node **first){
    char elem;
    node *tmp = *first;

    if(tmp == NULL){
        exit(1);
    }
    //先頭のノードの要素を取り出す
    elem = tmp->elem;
    //先頭のポインタを1つずらす
    *first = tmp->next;

    //取り出したノードのメモリを解放
    free(tmp);
    return elem;
}