/* ex 9_2
   Tarara */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE (int)(1e5 + 10)

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
    int count = 0;
    char input[SIZE];
    int i;
    //最初のノードの指す先
    node *first = NULL;

    scanf("%s", input);

    // 次の要素がある場合

    for(i = 0; i < strlen(input); i++)
    {
        push(&first, input[i]);
        if (first->next != NULL && first->elem != first->next->elem)
        {
            count += 2;
            pop(&first);
            pop(&first);
        }
    }

    printf("%d\n", count);
    return 0;
}