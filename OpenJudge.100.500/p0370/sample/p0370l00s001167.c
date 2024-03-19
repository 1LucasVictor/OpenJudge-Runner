#include <stdio.h>

int main(int argc, const char * argv[]) {
    int a,b,x;
    char op;
    while(1){
    scanf("%d %c %d",&a,&op,&b);
    if(op=='+'){
        x=a+b;
        printf("%d\n",x);
    }else if(op=='-'){
        x=a-b;
        printf("%d\n",x);
    }else if(op=='*'){
        x=a*b;
        printf("%d\n",x);
    }else if(op=='/'){
        x=a/b;
        printf("%d\n",x);
    }else if(op=='?'){
        break;
    }}
    return 0;
}