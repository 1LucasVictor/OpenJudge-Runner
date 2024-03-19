#include<stdio.h>

int main(void){
        int a,b,m;
        char op;

        while(1){
                scanf("%d %c %d",&a,&op,&b);

                if(op == '?')
                        break;
                else if(op == '+')
                        m = a + b;
                else if(op == '-')
                        m = a - b;
                else if(op == '*')
                        m = a * b;
                else if(op == '/')
                        m = a / b;

                printf("%d\n",m);
        }
        return 0;
}