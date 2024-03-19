#include <stdio.h>

int main(void){

    int a,b;
    char op;

    while(1){
        //input
        scanf("%d %s %d",&a, &op, &b);

        switch(op){
            case '+':
                printf("%d\n", a+b);
                break;

            case '-':
                printf("%d\n", a-b);
                break;

            case '*':
                printf("%d\n", a*b);
                break;

            case '/':
                printf("%d\n", a/b);
                break;

            case '?':
                return 0;

            default:
                break;

        }
    }
    
}