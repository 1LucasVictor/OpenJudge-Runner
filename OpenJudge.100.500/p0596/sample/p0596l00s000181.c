//ex9_2
//TKC001

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define SIZE 100000

typedef struct stack{
    char num;
    struct stack *next;
}stack;

void push(stack **stk, char num){
    stack *new = calloc(1, sizeof(stack));
    if(new == NULL) exit(1);

    new->num = num;
    new->next =*stk;
    *stk = new;
}

char pop(stack **stk){
    char num;
    stack *tmp = *stk;
    if(tmp == NULL) exit(1);
    num = tmp->num;
    *stk = tmp->next;

    free(tmp);
    return num;
}
//mainの中のwhileループを続けるか判断する関数
//スタックのnumが全部同じだったらもうやらない
int jadge(stack **stk){
    stack *tmp = *stk;
    char compare = tmp->num;

    while(1){
        if(tmp->num == 'F') return 0;//もうやらない  
        if(tmp->num != compare) return 1;//続ける
        tmp = tmp->next; 
    }
    free(tmp);
}

int main(void){
    int i, count = 0;
    stack *stk = NULL, *comp = NULL;
    char str[SIZE+1], last, prelast, fromcomp;
    //関数の引数にNULLがきたらダメっぽいので先頭にFirstのFを追加
    push(&stk, 'F');
    //入力
    scanf("%s", str);
    //スタックに文字列を追加
    for(i = 0; i < strlen(str); i++){
        push(&stk, str[i]);
    }

    if(strlen(str) == 1){
        count = 0;
    }
    else{
        while (1){
            last = pop(&stk);
            prelast = pop(&stk);
            //lastとprelastが同じならcompに移動、違ったら消し、countを増やす。
            if(last == prelast){
                push(&comp, last);
                push(&comp, prelast);
            }
            else{
                count++;
            }
            //compの最後の要素はstkの最後の要素と隣り合うのでstkに移動
            if(comp != NULL){
                fromcomp = pop(&comp);
                push(&stk, fromcomp);
            }
            if(jadge(&stk) == 0) break;
        }
    }
    //出力
    printf("%d", count*2);
  
    return 0;
}