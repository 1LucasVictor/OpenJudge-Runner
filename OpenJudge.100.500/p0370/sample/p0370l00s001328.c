#include <stdio.h>
int main(){
    int a,b,r;
    char op;
    while(1){
        scanf("%d %s %d", &a, &op, &b);
        if ( op == '?' )
                    break;
        switch (op){
            case '+': r = a + b; break;
            case '-': r = a - b; break;
            case '*': r = a * b; break;
            case '/': r = a / b; break;
        }
        printf("%d\n", r );
    }
    return 0;
}