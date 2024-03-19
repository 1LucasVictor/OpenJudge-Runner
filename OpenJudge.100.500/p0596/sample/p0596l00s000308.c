/* ex 9_2
   kanon */

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

int main(void)
{
    int ans = 0;
    char input_char, temp;

    //最初のノードの指す先
    node *first = NULL;

    while (1)
    {
        scanf("%c", &input_char);

        if (input_char == '\n')
            break;


        if(first==NULL){
            push(&first, input_char);
            continue;
        }
        //現在のスタックの一番上を取り出す
        temp = pop(&first);

        //もし文字が一致していれば新しい文字を追加
        //一致していなければansに除去した分加える
        if (input_char == temp)
        {
            //スタックにノードを追加
            push(&first, temp);
            push(&first, input_char);

        }else ans+=2;
    }

    printf("%d\n", ans);
    return 0;
}
