#include <stdio.h>
#include <stdlib.h>


#define SIZE 1000001

typedef struct node{
    char num;
    struct node *next;//後の要素へのポインタ
}stack;



void push(stack **first,  char number){
    stack *new = calloc(1,sizeof(stack));//メモリ確保
    if(new == NULL){
        exit(1);
    }
    new->num = number;//newの指すアドレスのnumの要素にnumber代入
    new->next = *first;//新しく作ったノードの次のノードをfirstが指すノードにする。
    *first = new;//一番手前のノードをfirstとして更新
    
}

char pop(stack **first){
    char elem;
    stack *tmp = *first;//保存場所用意。

    if(tmp == NULL){//メモリ確保
        exit(1);
    }

    elem = tmp->num;
    *first = tmp->next;//firstの値を、今指すノード(先頭だったもの)の次のノードに変える。
    free(tmp);//メモリ開放

    return elem;
    
}


int main(void){
    char sentence[SIZE];
    int i;
    int collected = 0;
    stack *stk;

    stk = NULL;//初めはNULLを指すようにする。

    scanf("%s", sentence);
    for(i=0; sentence[i] != '\0'; i++){
        if(stk == NULL){//1文字目だった時の処理
            push(&stk, sentence[i]);
        }
        else{
            if(sentence[i] != stk->num){//異なる色だった時⇒一回取り出し、収集数+2
                pop(&stk);
                collected+=2;
            }
            else{//同じ色だった時⇒その要素を入れる
                push(&stk, sentence[i]);
            }
        }
    }      
    
    printf("%d\n", collected);

    return 0;
}