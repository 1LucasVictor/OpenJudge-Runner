/* ex9_2
   tamayama */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
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
    int count=0;
    char cube[SIZE];
    int i=0;
    char dump;


    //最初のノードの指す先
    node *first = NULL;

    scanf("%s",cube);
    
    //スタックにノードを追加
    for(i=0;i<strlen(cube);i++){
        if(first == NULL || first->elem == cube[i]){
    //初めのキューブをスタックに入れる
    //または
    //ひとつ前のキューブの色が次のキューブの色と同じならスタックに入れる
            push(&first, cube[i]);
        }else{
    //ひとつ前のキューブの色が次のキューブの色と異なるならスタックから取り出す
            dump = pop(&first);
            count += 2;
        }
    }
    
    printf("%d",count);
    return 0;
}

