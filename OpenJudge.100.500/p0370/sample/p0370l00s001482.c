#include <stdio.h>
int main(void){
    int a,b,i;
    char op;
    
    for(i = 1; ; i++){
    scanf("%d %c %d", &a, &op, &b);
    
    if(op == '?')break;
    if(op == '+'){
        printf("%d\n", a + b);
    }
    if(op == '-'){
        printf("%d\n", a - b);
    }
    if(op == '*'){
        printf("%d\n", a * b);
    }
    if(op == '/'){
        printf("%d\n", a / b);
    }
    }
    return 0;
    }

