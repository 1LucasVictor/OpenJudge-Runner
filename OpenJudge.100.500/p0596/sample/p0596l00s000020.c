/* ex 9_2
   person_A */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define SIZE 100001

//リストのノード（スタック内の各データ）の定義
typedef struct node{
    char elem;
    struct node *next;
} node;

//スタックにデータを追加
void push(node  **first, char elem){
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
    char cubes[SIZE],top;
    int i,count=0;
    //赤色のキューブ'0'と青色のキューブ'1'を表す文字列の入力
    scanf("%s",cubes);

    //下の方からキューブをスタックに入れていく
    for(i=0;i<strlen(cubes);i++){
        //机の上にキューブがなければ、一つを置くだけ
        if(first==NULL){
            push(&first,cubes[i]);
        }
        else{
            top=pop(&first);
            //先頭と異なる色であれば、カウントする
            if(top!=cubes[i]){
                count+=2;
            }
            //先頭と同じ色であれば、二つを机の上に置き戻す
            else{
                push(&first,top);
                push(&first,cubes[i]);
            }
        }
    }
    
    //結果の出力
    printf("%d\n",count);

    return 0;
}