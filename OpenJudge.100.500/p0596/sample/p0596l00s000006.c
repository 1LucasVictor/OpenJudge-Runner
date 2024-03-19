/*  ex9_2
    kosaq   */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 100001

typedef struct node{
    char elem;
    struct node *next;
} node;//リストのノード（スタック内）の定義

//スタックにデータを追加
void push(node **first, char elem){
    //追加する分の領域を確保
    node *new = calloc(1, sizeof(node));
    if(new == NULL){
        exit(1);
    }
    new -> elem = elem;
    new -> next = *first;
    *first = new;
}

//スタックからデータを取り出す
char pop(node **first){
    char elem;
    node *tmp = *first;
    if(tmp == NULL){
        exit(1);
    }
    elem = tmp -> elem;
    *first = tmp -> next;
    //取り出したノードのメモリを確保
    free(tmp);
    return elem;
}

int main(void){
    char cube_input[SIZE];//入力する配列を定義
    scanf("%s", cube_input);
    int count = 0;//取り除く回数を定義
    //最初のノードはNULL
    node *first = NULL;

    for(int i = 0; i < strlen(cube_input); i++){
        if(first == NULL || cube_input[i] == first -> elem){
            push(&first, cube_input[i]);
        }//NULLのとき、ノードをスタックに追加する。要素が一致するときはノードをスタックに追加する。
        else{
            pop(&first);//異なる場合は取り除き、カウントを１増やす
            count++;
        }
    }
    printf("%d\n", count * 2);//答えを出力
    return 0;
}