#include <stdio.h>

int main(void){
    int a, b, answer;
    char op;
    while(1){
    scanf("%d %c %d", &a, &op, &b);
        if(op == '?'){
            break;
        }else if(op == '+'){
            answer = a + b;
        }else if(op == '-'){
            answer = a - b;
        }else if(op == '/'){
            answer = a / b;
        }else if(op == '*'){
            answer = a * b;
        }
        printf("%d\n", answer);
    }
    return 0;
}