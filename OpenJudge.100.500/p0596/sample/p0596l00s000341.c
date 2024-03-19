/*  ex9_2
    Rikuta  */
#include <stdio.h>
#include <stdlib.h>
// リストのノード（スタック内の各データ）の定義
typedef struct node
{
    char elem;
    struct node *next;
} node;

void push(node **first, char elem);
char pop(node **first);
char last(node **first);

int main(void)
{
    node *cube = NULL;
    int count = 0;
    while (1)
    {
        char temp_char;
        scanf("%c", &temp_char);
        if (temp_char=='\n')
        {
            break;
        }
        if (temp_char=='0')
        {
            if (last(&cube)=='1')
            {
                pop(&cube);
                count+=2;
            }
            else
            {
                push(&cube, temp_char);
            }
            
            
        }
        if (temp_char=='1')
        {
            if (last(&cube) == '0')
            {
                pop(&cube);
                count+=2;
            }
            else
            {
                push(&cube, temp_char);
            }
        }
    }
    printf("%d\n", count);
    return 0;
}

//スタックにデータを追加
void push(node **first, char elem)
{
    //追加する分の領域を確保
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
        exit(1);
    elem = tmp->elem;
    *first = tmp->next;
    //取り出したノードのメモリを解放
    free(tmp);
    return elem;
}
char last(node **first)
{
    char elem;
    node *tmp = *first;
    if (tmp == NULL)
        return '-';
    elem = tmp->elem;
    return elem;
}
