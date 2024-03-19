/* ex 9_2
   cy_an  */

#include <stdio.h>
#include <stdlib.h>
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
    node *first = NULL;
    char arr[SIZE+1];
    int i = 0, count = 0;
    
    //スタックにデータを追加
    scanf("%s", arr);
    for(i=0; arr[i] != '\0'; i++){
        // スタックが空のとき、またはスタックのトップと一致するとき
        if(first == NULL || first->elem == arr[i]){
            push(&first, arr[i]);
        }else{
            pop(&first);
            count += 2;
        }
    }
    // 出力
    printf("%d\n", count);
    return 0;
}