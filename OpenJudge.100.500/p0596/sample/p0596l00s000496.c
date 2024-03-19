/*  ex9_2
    L40S38  */
#include <stdio.h>
#include <stdlib.h>
#define MAX 100000

//リストのノード（スタック内の各データ）の定義
typedef struct node{
    char cube;
    struct node *next;
} node;

//スタックにデータを追加
void push(node **first, char *cube){
    //追加する分の領域を確保
    node *new = calloc(1, sizeof(node));
    if(new == NULL) exit(1);
    new->cube = *cube;
    new->next = *first;
    *first = new;
    return;
}

//スタックからデータを取り出す
void pop(node **first){
    node *tmp = *first;
    if(tmp == NULL) exit(1);
    *first = tmp->next;
    //取り出したノードのメモリを解放
    free(tmp);
    return;
}



int main(void){
    //キューブが積まれている順番を格納
    char cubes[MAX+1],*ptr;
    scanf("%s",cubes);
    ptr=&cubes[0];
    //最初のノードの指す先
    node *first = NULL;
    int count=0;
    //while構文を使ってスタックの中身を操作
    while(*ptr){
        //先にキューブを一旦乗せる
        push(&first,ptr);
        if(first->next != NULL && first->next->cube!=*ptr){
            //違う色が隣り合わせになるときはスタックから2つのキューブを取り出す
            pop(&first);
            pop(&first);
            count+=2;
        }
        ptr++;
    }
    //結果の出力
    printf("%d\n",count);
    return 0;
}