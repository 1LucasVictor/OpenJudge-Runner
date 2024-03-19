#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1000000
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
void free_stack(node **first)
{
    node *tmp = *first, *next;
    while (tmp != NULL)
    {
        next = tmp->next;
        free(tmp);
        tmp = next;
    }
}

int main(void){
    char cube[SIZE];
    char under_cube;
    int i,count = 0,answer = 0;
    scanf("%s",cube);
    //最初のノードの指す先
    node *first = NULL;
    /* 文字の数だけループ */
    for ( i = 0; i < strlen(cube); i++)
    {
        if (count == 0)
        {
            /* stackがからの場合、挿入 */
            push(&first,cube[i]);
            count += 1;
        }
        else
        {
            if (first->elem == cube[i])
            {
                /* 1か0が連続している場合、stackに追加 */
                push(&first,cube[i]);
                count += 1;
            }
            else
            {
                /* 連続していない場合は、追加せず */
                answer += 2;
                pop(&first);
                count -= 1;
            }
            
        }
        
    }
    free_stack(&first);
    printf("%d\n",answer);
    return 0;
}
