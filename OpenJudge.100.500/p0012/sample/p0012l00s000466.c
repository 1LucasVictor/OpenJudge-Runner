#include <stdio.h>
#include <stdlib.h>

//スタックに入るデータの上限
#define MAX_STACK_NUM 10

//スタック構造体
typedef struct STACK{
    //スタックされているデータの数
    int num;
    //スタックされているデータ
    int data[MAX_STACK_NUM];
} STACK_T;

void initStack(STACK_T*);
void printStack(STACK_T*);
void push(STACK_T*, int);
int pop(STACK_T*);

//スタックを初期化する関数
void initStack(STACK_T *stack){
    int i = 0;
    //データの数を初期化
    stack -> num = 0;
    //データの中身を初期化
    for (i = 0; i < MAX_STACK_NUM; i++){
        stack -> data[i] = 0;
    }
}

//pushする関数
void push(STACK_T *stack, int input){
    //スタックが満杯なら何もせずに関数終了
    if (stack -> num >= MAX_STACK_NUM){
        return;
    }

    //データをスタックの最後に追加
    stack -> data[stack -> num] = input;
    //データの数もカウントアップ
    stack -> num++;
}

//popする関数
int pop(STACK_T *stack){
    int i = 0;
    int ret = 0;

    //スタックが空ならなにもせずに関数終了
    if (stack -> num == 0){
        return (-1);
    }

    //一番最後にpushした数（配列の最後尾）を取得
    ret = stack -> data[stack -> num - 1];
    //popしたのでスタックのデータを１減らす
    stack -> num--;

    return ret;
}

int main(void)
{
    int input;
    int output;
    STACK_T stack;

    //スタックを初期化
    initStack(&stack);

    while (fscanf(stdin,"%d", &input) != EOF){
        //scanf("%d", &input);

        if (input == 0){
            output = pop(&stack);
            if (output != -1){
                printf("%d\n", output);
            }
        }else {
            push(&stack, input);
        }
    }

    return (0);
}

