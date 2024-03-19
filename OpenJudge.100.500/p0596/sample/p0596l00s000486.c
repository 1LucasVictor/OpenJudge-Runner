/* ex9_2
   TakayukiY*/

#include <stdio.h>
#include <stdlib.h>

//リストのノード（スタック内の各データ）の定義
typedef struct node
{
    char elem;
    struct node *next;
} node;

//スタックにデータを追加
void push(node **first, char elem)
{
    node *new = calloc(1, sizeof(node));
    if (new == NULL)
        exit(1);
    new->elem = elem;
    new->next = *first;
    *first = new;
}

//スタックからデータを取り出す
char pop(node **first)
{
    char elem;
    node *tmp = *first;
    if (tmp == NULL)
        return '\0';
    elem = tmp->elem;
    *first = tmp->next;
    free(tmp);
    return elem;
}

//スタックのメモリをすべて解放
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

int main(void)
{
    char input[100000 + 1], *ptr;
    node *first = NULL;
    int count = 0;

    //入力を受け取る
    scanf("%s", input);
    ptr = input;

    //1文字ずつ走査
    while (*ptr != '\0')
    {
        if (first==NULL)
        {
            push(&first, *ptr);
        }
        else
        {
            //同じ文字が連続している場合
            if (first->elem == *ptr)
            {
                push(&first, *ptr);
            }
            //違う文字がつながったとき、消去
            else
            {
                pop(&first);
                count+=2;
            }
        }
        ptr++;
    }

    printf("%d", count);

    free_stack(&first);

    return 0;
}