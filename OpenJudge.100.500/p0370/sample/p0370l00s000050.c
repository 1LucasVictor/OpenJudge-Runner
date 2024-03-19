#include<stdio.h>
int main(void){
    int a,b,x;
    char op;
        while(1){
            scanf("%d %c %d" ,&a, &op, &b);
            if( op == '+'){
                x = a + b;
            }
            else if( op == '-'){
                x = a - b;
            }
            else if( op == '*'){
                x = a * b;
            }
            else if( op == '/'){
                x = a / b;
            }
            else{
                break;
            }
            printf("%d\n",x);
        }
return 0;
}