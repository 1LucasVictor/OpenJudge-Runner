/* ex9_2.c "Unification"
    dada__              */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100001

typedef struct node{
    char elem;
    struct node *next;
}node;
//スタックにデータを追加
void push(node **first, char elem){
    node *new = calloc(1,sizeof(node));
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
    node *first = NULL;
    char cube[SIZE];
    char *read=cube;
    int count=0;
    //入力
    scanf("%s", cube);

    while(*read){
        //スタックがNULLならpush
        if(first==NULL){
            push(&first, *read);
            read++;
        }
        //スタックの先頭と読み込む文字の比較 
        //異なるとき
        else if((first->elem=='0' && *read=='1') || (first->elem=='1' && *read=='0')){
            pop(&first);
            count+=2;
            read++;
        }
        //同じとき
        else{
            push(&first, *read);
            read++;
        }
    }
    //答えの出力
    printf("%d", count);

    return 0;
}