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

//プロトタイプ宣言
void push(node **cube, char elem);
char pop(node **cube);
char last(node **cube);

int main(void)
{   
    //最初のノードがさす先．
    node *cube = NULL;
    //countの初期化
    int count = 0;
    while (1)
    {   
        //一時的な文字の宣言
        char temp_char;
        //入力
        scanf("%c", &temp_char);
        //改行で終了
        if (temp_char=='\n')
        {
            break;
        }
        if (temp_char=='0')
        {   
            if (last(&cube)=='1')
            {
                //0が入力され，cubeの最後の文字が1なら，cubeをpopして，カウントを+2
                pop(&cube);
                count+=2;
            }
            else
            {   
                //0が入力され，cubeの最後の文字が0なら，0をpush
                push(&cube, temp_char);
            }
            
            
        }
        if (temp_char=='1')
        {
            if (last(&cube) == '0')
            {
                //1が入力され，cubeの最後の文字が0なら，cubeをpopして，カウントを+2
                pop(&cube);
                count+=2;
            }
            else
            {
                //1が入力され，cubeの最後の文字が1なら，1をpush
                push(&cube, temp_char);
            }
        }
    }
    //countを出力
    printf("%d\n", count);
    return 0;
}

//スタックにデータを追加
void push(node **cube, char elem)
{
    //追加する分の領域を確保
    node *new = calloc(1, sizeof(node));
    //確保できないならエラー
    if (new == NULL)
        exit(1);
    //新しいデータの要素はelemでそれに続くものはcubeとなる
    new->elem = elem;
    new->next = *cube;
    //新しいノードが1番目に更新される．
    *cube = new;
}

//スタックからデータを取り出す
char pop(node **cube)
{
    char elem;
    node *tmp = *cube;
    if (tmp == NULL)
        exit(1);
    elem = tmp->elem;
    *cube = tmp->next;
    //取り出したノードのメモリを解放
    free(tmp);
    return elem;
}
//スタックの最初を参照する．
char last(node **cube)
{
    //最初の文字が入る変数の宣言
    char elem;
    node *tmp = *cube;
    //データがなければ'-'を返す．
    if (tmp == NULL)
        return '-';
    //データの最初をelemとして返す
    elem = tmp->elem;
    return elem;
}
