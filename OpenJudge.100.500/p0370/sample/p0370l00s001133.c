/* Simple Calculator */
#include <stdio.h>

int main()
{
    int a, b;
    char op;

    while(1){
        scanf("%d %c %d", &a, &op, &b);
     if(op == '?'){ break; }
     if(op == '+'){ printf("%d\n", a+b); }
     if(op == '-'){ printf("%d\n", a-b); }
     if(op == '*'){ printf("%d\n", a*b); }
     if(op == '/'){ printf("%d\n", a/b); }
    }
}
