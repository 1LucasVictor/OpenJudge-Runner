/* ex9_2
    fmuacshai */

#include <stdio.h>
#include <stdlib.h>
# define SIZE 100000
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
    char cube;
    node *cubefirst=NULL;
    int count=0;
    while(1){
        scanf("%c",&cube);
        if(cube=='\n'){
            break;
        }
        if(cubefirst==NULL){
            push(&cubefirst, cube);
        }
        if(cubefirst->elem=='1'){
            if(cube=='0'){
                pop(&cubefirst);
                count+=2;
            }else{
                push(&cubefirst, cube);
            }
        }else{
            if(cube=='1'){
                pop(&cubefirst);
                count+=2;
            }else{
                push(&cubefirst, cube);
            }
        }
    }
    printf("%d\n",count);
    return 0;
}






