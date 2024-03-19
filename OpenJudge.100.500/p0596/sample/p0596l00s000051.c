/*  ex9_2
    kento_titech*/
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
void push(node **first, char elem){//先頭を示すノードと追加するデータを引数にする
    //追加する分の領域を動的確保
    node *new = calloc(1, sizeof(node));
    if(new == NULL) 
        exit(1);
    new->elem = elem;
    new->next = *first;//先頭を示すノードの一つ手前に追加
    *first = new;//追加したノードを先頭を示すノードにする
}

//スタックからデータを取り出す
char pop(node **first){//先頭を示すノードを引数とする
    char elem;
    node *tmp = *first;
    if(tmp == NULL) 
        exit(1);
    elem = tmp->elem;
    *first = tmp->next;//一つ後ろを先頭のノードにする
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
                count+=2;//一回取り出すごとに２つのキューブをとりだしている。
            }
        }else{//初期状態のノードにデータを追加
            push(&first,str[i]);
        }
    }
    printf("%d\n",count);
    return 0;
}
