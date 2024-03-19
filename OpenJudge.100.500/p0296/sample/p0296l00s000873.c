#include <stdio.h>

#define STACKSIZE 100

int stack[STACKSIZE];

int n=0;

void push(int x)
{
        if ( n >= STACKSIZE){
                fprintf(stderr, "stack overflow\n");
                n=0;
        }
        n++;
        stack[n]=x;
}

int pop(void){
  n=n-1;
  return stack[n+1];
}

main()
{
        int c;
        long x, a, b;

        while ((c=getchar())!=EOF){
                if (isdigit(c)){
                        ungetc(c, stdin);
                        scanf("%d", &x);
                        push(x);
                }
                else {
                        switch(c) {
                        case '+':
                                b=pop();
                                a=pop();
                                push(a+b);
                                break;
                        case '-':
                                b=pop();
                                a=pop();
                                push(a-b);
                                break;
                        case '*':
                                b=pop();
                                a=pop();
                                push(a*b);
                                break;
                        case '/':
                                b=pop();
                                a=pop();
                                push(a/b);
                                break;
                        case '\n':
                                if (n==1){
                                        printf("%d\n", pop());
                                }
                                else {
                                        printf("Invalid expression.\n");
                                        n=0;
                                }
                        case ' ':
                                break;
                        case '\t':
                                break;
                        default:
                                printf("Invalid input.\n");
                                n=0;
                                break;
                        }
                }
        }
}


