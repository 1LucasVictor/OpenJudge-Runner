/* ex 9_2
   cy_an  */

#include <stdio.h>
#include <stdlib.h>
//スタックに格納するデータの最大数
#define SIZE 100000

//スタックの定義
typedef struct stack{
    int size;
    int count;
    char data[SIZE];
    char *top;
} stack;

//スタックの初期化
void initialize_stack(stack *stk){
    stk->count = 0;
    stk->size = SIZE;
    stk->top = &(stk->data[SIZE]);
}

//データの追加
void push(stack *stk, int elem){
    if(stk->count >= stk->size){
        fprintf(stderr, "Error: stack overflow. (x=%c)\n", elem);
        exit(1);
    }
    else{
        stk->top--;
        *(stk->top) = elem;
        stk->count++;
    }
}

//データの取り出し
char pop(stack *stk){
    char latest;
    if(stk->count <= 0){
        fprintf(stdout, "Error: stack underflow.\n");
        exit(1);
    }
    else{
        latest = *(stk->top);
        stk->top++;
        stk->count--;
        return latest;
    }
}

int main(void){
    stack cube;
    char arr[SIZE];
    int i = 0, count = 0;
    
    //スタックを初期化
    initialize_stack(&cube);

    //スタックにデータを追加
    scanf("%s", arr);
    while(arr[i] != '\0'){
        if(arr[i] != *(cube.top) && cube.count > 0){ // 入力とtopが一致しないとき
            pop(&cube);            // topをpop
            count++;
        }else{
            push(&cube, arr[i]);
        }
        i++;
    }
    // 出力
    printf("%d", 2*count);
    return 0;
}