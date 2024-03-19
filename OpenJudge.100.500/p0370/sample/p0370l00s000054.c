#include<stdio.h>
int main(void){
    int a,b,e;
    char op;
    while(1){
        scanf("%d %c %d",&a,&op,&b);
        if(op=='?')break;
        if(op=='+'){
            e=a+b;
        }else if(op=='-'){
            e=a-b;
        }else if(op=='*'){
            e=a*b;
        }else if(op=='/'){
            e=a/b;
        }else{

        }
        printf("%d\n",e);
    }

    return 0;
}