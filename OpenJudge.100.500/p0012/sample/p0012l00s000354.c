#include <stdio.h>

int data[100];
int out[100];
int sp = 0;
int outSp = 0;

int empty(){
    return sp <= 0;
}

void pop(){
    out[outSp] = data[sp-1];
    outSp++;
    sp--;
}

void push(int v){
    data[sp] = v;
    sp++;
}

int main(){
    int i,n;
    while(1){
        scanf("%d",&n);
        if(n==0){
            pop();
        }
        else{
            push(n);
        }
        if(empty())break;
    }
    
    for(i=0;i<=outSp-1;i++){
        printf("%d\n",out[i]);
    }
    return 0;
}