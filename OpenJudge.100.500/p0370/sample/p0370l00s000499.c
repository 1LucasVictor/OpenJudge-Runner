#include<stdio.h>

int main(void){
    char op;
    int a, b, ans;
    
    while(1){
        scanf("%d %c %d", &a, &op, &b);
        
        switch(op){
          case '+':
            ans = a + b;
            break;
          case '-':
            ans = a - b;
            break;
          case '*':
            ans = a * b;
            break;
          case '/':
            ans = a / b;
            break;
        }
        
        if(op == '?') break;
        else printf("%d\n", ans);
    }
    
    return 0;
}