/*ex9_2 hightierra*/
#include <stdio.h>
#include <stdlib.h>
#define LIMIT 100000

//リストのノード（スタック内の各データ）の定義
typedef struct node{
    char cube;
    struct node *next;
}node;

//スタックのpush
void push(node **first, char cube){
    //追加する分の領域を確保
    node *new = calloc(1, sizeof(node));
    if(new == NULL) exit(1);
    new->cube = cube;
    new->next = *first;
    *first = new;
}

//スタックのpop
char pop(node **first){
    char cube;
    node *tmp = *first;
    if(tmp == NULL){
        exit(1);
    }
    cube = tmp->cube;
    *first = tmp->next;
    //取り出したノードのメモリを解放
    free(tmp);
    return cube;
}

int main(void){
    int count=0,i;
    char cubic[LIMIT];
    //スタックの一番上
    node *first = NULL;
  	node *tmp = NULL;

    //キューブの積み方
    scanf("%s",cubic);

    //キューブを最後まで積むまでループ
    i=0;
    while(cubic[i] != '\0'){ 
        //積み方通りにキューブを積む       
        push(&first,cubic[i]);
        //もしも、前のキューブと今のキューブの色が異なったら両方を取り除く
        if(first->next != NULL && (first->cube != first->next->cube)){
            pop(&first);
            pop(&first);
            count += 2;
        }
        i++;
    }
    while(first!=NULL){
    	tmp = first;
      	first = first->next;
      	free(tmp);
    }
    printf("%d\n",count);
    
    return 0;
}
