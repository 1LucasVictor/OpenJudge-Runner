#include<stdio.h>
 
int main(void){
    int a,b,an;
    char op;
    for(;;){
        scanf("%d %c %d",&a,&op,&b);
        if(op=='?') break;
        switch(op){
            case '+':
                an=a+b;
                break;
            case '-':
                an=a-b;
                break;
            case '*':
                an=a*b;
                break;
            case '/':
                an=a/b;
                break;
        }
        printf("%d\n",an);
    }
    return 0;
}
