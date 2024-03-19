#include <stdio.h>

int main(int argc, const char * argv[]) {

    int a,b;
    char op;
    
    
    
    while (1) {
        
        scanf("%d %c %d",&a,&op,&b);
        
        if (op == '?') {
            break;
        }
    
    switch (op) {
        case '+':
            printf("%d\n",a+b);
            break;
        case '-':
            printf("%d\n",a-b);
            break;
        case '*':
            printf("%d\n",a*b);
            break;
        case '/':
            printf("%d\n",a/b);
            break;
        default:
            break;
    }
    }
    
    return 0;
}