#include <stdio.h>

int main(void){
    int stack[10],top;
    int n;
    while(scanf("%d",&n)>0){
        if(n){
            stack[top++]=n;
        }else{
            printf("%d\n",stack[--top]);
        }
    }
    return 0;
}