/* ex4-2
   kas056*/

#include <stdio.h>
#include <stdlib.h>


#define SIZE 1000001

typedef struct node{
    char num;
    struct node *next;//次のノードのポインタ
}stack;



void push(stack **first,  char number){
    stack *new = calloc(1,sizeof(stack));//メモリ確保
    if(new == NULL){//できなかったら終了
        exit(1);
    }
    new->num = number;//newの指すアドレスのnumの要素にnumber代入
    new->next = *first;//新しく作ったノードの次のノードをfirstが指すノードにする。
    *first = new;//一番手前のノードをfirstとして更新
    
}

void pop(stack **first){
    stack *tmp = *first;//保存場所用意。
    
    if(tmp == NULL){//メモリ確保
        exit(1);
    }

    *first = tmp->next;//firstの値を、今指すノード(先頭だったもの)の次のノードに変える。
    free(tmp);//メモリ開放
}


int main(void){
    char sentence[SIZE];
    int i;
    int collected = 0;//収集した色
    stack *stk;

    stk = NULL;//初めはNULLを指すようにする。

    scanf("%s", sentence);//入力読込
    for(i=0; sentence[i] != '\0'; i++){
        push(&stk, sentence[i]);//stkの表すアドレスの位置にsentenceの要素を入れる。

        //次のノードがNULLでないかつそのノード内の値が異なる⇒2回popし、collectedを2増やす。
        if(stk->next != NULL && stk->num != stk->next->num){
            pop(&stk);
            pop(&stk);
            collected += 2;
        }
    
    }      
    
    //回収した合計値出力
    printf("%d\n", collected);

    return 0;
}