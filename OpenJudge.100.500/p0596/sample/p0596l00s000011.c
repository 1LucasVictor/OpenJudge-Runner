/* ex 9_2
   yumizmiz */

#include <stdio.h>
#include <stdlib.h>
//最大要素数
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
    //リストの先頭
    node *first = NULL;
    //キューブの配列,最大文字数10^5+1
    char cubes[SIZE+1], *ptr;
    ptr = cubes;
    scanf("%s",cubes);
    
    int pop_count = 0;
    while(*ptr){
        //空だったら無条件にpushする．または同じ色なら取り除かずpush
        if(first == NULL || first->elem == *ptr){
            push(&first,*ptr);
        }
        else{
            pop(&first);
            //取り除く数は2つ
            pop_count+=2;
        }
        ptr++;
    }
    printf("%d\n",pop_count);
    return 0;
}