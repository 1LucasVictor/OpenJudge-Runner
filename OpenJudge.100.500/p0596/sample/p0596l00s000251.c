/* ex 9_2
   offNaria */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//リストのノード（スタック内の各データ）の定義
typedef struct node
{
    char elem;
    struct node *next;
} node;

void push(node **first, char elem); //スタックにデータを追加
char pop(node **first);             //スタックからデータを取り出す

int main(void)
{
    int count = 0, length;
    char input[100001];
    //最初のノードの指す先
    node *first = NULL;
    //スタックにノードを追加
    scanf("%s", input);
    length = (int)strlen(input);
    for (int i = 0; i < length; i++)
    {
        //スタックが空でないとき
        if (first != NULL)
        {
            //スタックの一番上のものと次に来るものが同じならばpush
            if (input[i] == first->elem)
            {
                push(&first, input[i]);
            }
            //異なるならばpopしてキューブ2個を取り除いたと記録
            else
            {
                pop(&first);
                count += 2;
            }
        }
        //スタックが空のとき
        else
        {
            push(&first, input[i]);
        }
    }
    printf("%d\n", count);
    return 0;
}

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

char pop(node **first)
{
    char elem;
    node *tmp = *first;
    if (tmp != NULL)
    {
        elem = tmp->elem;
        *first = tmp->next;
        //取り出したノードのメモリを解放
        free(tmp);
        return elem;
    }
}