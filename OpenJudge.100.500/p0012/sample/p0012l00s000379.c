#include <stdio.h>

int data[100];
int sp=0;
int top(){
    return data[sp-1];
}

void pop(){
    sp--;
}
void push(int n){
    if(n>0){
        data[sp]=n;
        sp++;
    }
}

int main(){
    int n;
    while(scanf("%d",&n)!=EOF){
        if(n==0){
            printf("%d\n",top());
            pop();
        }else{
            push(n);
        }
    }
    return 0;
}