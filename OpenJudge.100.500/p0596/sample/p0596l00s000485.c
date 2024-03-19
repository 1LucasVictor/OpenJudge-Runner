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
    char input[10000 + 1], *ptr;
    node *first = NULL;
    int count = 0;

    scanf("%s", input);
    ptr = input;

    while (*ptr != '\0')
    {
        if (*ptr == '0')
        {
            push(&first, *ptr);
        }
        else
        {
            if (first==NULL||first->elem == '1')
            {
                push(&first, *ptr);
            }
            else
            {
                pop(&first);
                count+=2;
            }
        }
        ptr++;
    }

    printf("%d", count);

    return 0;
}