#include <stdio.h>

int
main(int argc, char *argv[])
{
        int a, b;
        char op;
        int ans;

        while(scanf("%d %c %d", &a, &op, &b), op != '?') {
                switch(op) {
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
                printf("%d\n", ans);
        }


        return 0;
}