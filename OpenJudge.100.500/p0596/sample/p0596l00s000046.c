/* ex 9_2
   Sagzar1993 */

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
    int cnt = 0; //除去可能なキューブの数
    char cube; //キューブの色を表す文字
    //最初のノードの指す先
    node *cubeFirst = NULL;
    
    //１文字ずつ入力してスタックを操作
    while(1){
        scanf("%c", &cube);
        //文字列の最後に来たら終了
        if(cube == '\n'){
            break;
        }
        if(cubeFirst == NULL){
            push(&cubeFirst, cube); //スタックが空ならそのまま追加
        }else if((cubeFirst->elem == '0' && cube == '1') || (cubeFirst->elem == '1' && cube == '0')){
            pop(&cubeFirst); //入力されたcubeをスタックの先頭と比較し、０と１の組ならば除去可能
            cnt += 2; //取り出したスタックの先頭および入力の２文字が除去可能なので、cntを＋２
        }else{
            push(&cubeFirst, cube); //０同士、１同士ならば除去不可なのでそのままスタックに追加
        }
    }
    
    printf("%d\n", cnt); //除去可能なキューブ数cntを出力
    return 0;
}