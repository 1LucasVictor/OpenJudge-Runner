#include <stdio.h>
int main(void){
    int a,b,i;
    char op;
    
    for(i=0;i<=20000;i++){
    
        scanf("%d %c %d",&a,&op,&b);
    
        if(op == '+') {
            printf("%d\n", a + b);
        }
        if(op == '-') {
            printf("%d\n", a - b);
        }
        if(op == '*') {
            printf("%d\n", a * b);
        }
        if(op == '/') {
            printf("%d\n", a / b);
        }
        if(op == '?') break;
    }
    
    return 0;
}
