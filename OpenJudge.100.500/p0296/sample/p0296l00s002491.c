// スタック
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<limits.h>

// スタック関連の定義
const int Max_Stack = 1000;
int stack_pointer = 0;
int ary_stack[Max_Stack];

void create_stack(void);
int push(int element);
int pop(void);

int main(void)
{
    char str[10];
    int i = 0, ch, operand_1, operand_2;
    int result;

    // スタックを作成
    create_stack();

    while( ( ch = getchar() ) != '\n' )
    {

        if( '0' <= ch && ch <= '9' )
        {
            str[i++] = ch;
        }
        else if( ch == '+' || ch == '-' || ch == '*' )
        {
            operand_1 = pop();
            operand_2 = pop();

            if( ch == '+' )
            {
                result = operand_2 + operand_1;
            }
            else if( ch == '-' )
            {
                result = operand_2 - operand_1;
            }
            if( ch == '*' )
            {
                result = operand_2 * operand_1;
            }

            // 演算結果をpushしておく
            push(result);
        }
        else if( str[0] != '\0' )
        {
            str[i] = '\0';

            // 数値をプッシュする
            push(atoi(&str[0]));

            // 初期化をする
            i = 0;
            str[0] = '\0';
        }
    }

    printf("%d\n", result);

    return 0;

}

// スタックを作成する関数
void create_stack(void)
{
    int i;

    for(i = 0; i < Max_Stack; i++)
    {
        // スタックの初期化
        ary_stack[i] = 0;
    }

    return;
}

// スタックへプッシュする関数
int push(int element)
{

    if( stack_pointer > Max_Stack )
    {
        // サイズオーバー
        return -1;
    }

    // スタックに追加する
    ary_stack[++stack_pointer] = element;

    return 0;
}

// スタックからポップする関数
int pop(void)
{
    int ret = 0;

    if( stack_pointer < 0 )
    {
        // スタックが空の時
        //ret = INT_MIN;
    }
    else
    {
        ret = ary_stack[stack_pointer--];
    }

    return ret;
}

