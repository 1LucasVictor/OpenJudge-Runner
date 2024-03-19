/* ex9_2
   key_tree */

#include <stdio.h>
#include <stdlib.h>
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
    int count = 0, i;
    char input_str[SIZE];
    scanf("%s", input_str);
    //最初のノードはNULLを指す
    node *first = NULL;
    
    for(i = 0; input_str[i] != '\0'; i++){
        //nullのとき、または一個前の要素と一致するときはスタックに追加
        if(first == NULL || input_str[i] == first -> elem){
            push(&first, input_str[i]);
        }
        //それ以外（一個前と要素が違う）のとき、取り出してカウントを2進める
        else{
            pop(&first);
            count += 2;
        }
    }

    printf("%d\n", count);
    return 0;

}
