/*  ex9_2 Stack Cubes
    pandacodeb  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE 100001

//スタック (単方向リストで定める)
typedef struct node{
    char color;
    struct node *next;
}node;

void push(node **first, char color){
    node *new = calloc(1, sizeof(node));
    if (new == NULL)
        exit(1);
    new->color = color;
    new->next = *first;
    *first = new;
}

char pop(node **first){
    char color;
    node *tmp = *first;
    if (tmp == NULL)
        exit(1);
    color = tmp->color;
    *first = tmp->next;
    free(tmp);
    return color;
}

int main(void){
    char *cubes, top;
    int count = 0, length;

    //キューブの並びを入力
    cubes = (char*) malloc(sizeof(char)*SIZE);
    scanf("%s", cubes);
    length = strlen(cubes);

    node *first = NULL;         //スタックを宣言
    push(&first, cubes[0]);     //最初のキューブをスタックに push
    for (int i = 1; i < length; i++){
        if (first == NULL)          //スタックは空の場合
            push(&first, cubes[i]); //候補のキューブをスタックに入れる
        else{
            top = pop(&first);      //スタックの最上のキューブ (top) を pop する
            if (top == cubes[i]){   //top と候補のキューブの色が同じ場合
                push(&first, top);  //top のキューブをスタックに戻す
                push(&first, cubes[i]); //候補のキューブをスタックに入れる
            }
            else                    //top と候補のキューブの色が違う場合
                count+=2;           //何もスタックに入れない、取り除けるキューブの数を数える
        }
    }

    //最大で取り除けるキューブの数を出力
    printf("%d\n", count);
    return 0;
}