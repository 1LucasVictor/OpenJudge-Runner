/*
http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0013&lang=jp
*/


#include<stdio.h>
#define MAX 100

typedef struct{
    int array[MAX]; //データが格納される配列
    int current;    //現在の位置
}STACK;

void init(STACK* pstack){
    int i;
    for(i=0;i<MAX;i++){
        pstack->array[i]=0;
    }
    pstack->current=0;
}

int push(STACK * pstack,int value){

    if(pstack->current<MAX){
        pstack->array[pstack->current]=value;
        pstack->current++;
        return 1;
    }
    return 0;
}

int pop(STACK* pstack,int* pvalue){

    if(pstack->current>0){
        pstack->current--;
        *pvalue=pstack->array[pstack->current];
        return 1;
    }
    return 0;
}

int main(void)
{
    STACK s;
    int value;  //値
    int num;
    int i;

    init(&s);

    scanf("%d",&num);

    for(i=0;i<8;i++){
        
        if(num==0){
            pop(&s,&value);
            printf("%d\n",value);
        }else{
            push(&s,num);

        }
        scanf("%d",&num);
    }

    return 0;
}
