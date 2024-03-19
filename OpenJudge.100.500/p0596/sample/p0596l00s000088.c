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
    if(new == NULL) 
        exit(1);
    new->elem = elem;
    new->next = *first;
    *first = new;
}

//スタックからデータを取り出す
char pop(node **first){
    char elem;
    node *tmp = *first;
    if(tmp == NULL) 
        exit(1);
    elem = tmp->elem;
    *first = tmp->next;
    //取り出したノードのメモリを解放
    free(tmp);
    return elem;
}
int main(void){
    char str[SIZE];
    int count=0,i;
    node *first = NULL;//最初のノードの指す先
    scanf("%s",str);
    for(i=0;i<strlen(str);i++){
        if(first!=NULL){
            if(str[i]==first->elem){//スタックにノードを追加
                push(&first,str[i]);
            }
            else{//スタックからデータを取り出す
                pop(&first);
                count+=2;
            }
        }else{//初期状態のノードにデータを追加
            push(&first,str[i]);
        }
    }
    printf("%d\n",count);
    return 0;
}
