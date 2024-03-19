#include <stdio.h>
int main(){
    int a,b,r = 0;
    char op = 0;
    while(1){
        scanf("%d %s %d", &a, &op, &b);
        if ( op == '?' ) break;
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