#include <stdio.h>
#include <stdlib.h>

int stack[101];
int top=0;

void push(int n){
    stack[++top]=n;
    //printf("stack top %d\n",stack[top]);
}

int pop(){
    int n;
    n=stack[top--];
    return n;
}

int main(void){
    int n1,n2;
    char s[100];
    while(scanf("%s",s)!=EOF){
        if(s[0]>'0'&&s[0]<='9'){
            //printf("!%c\n",s[0]);
            push(atoi(&s[0]));
        }else{
            n2=pop();
            n1=pop();
            //printf("!!%c\n",s[0]);
            //printf("%d %d\n",n1,n2);
            switch(s[0]){
                case '+':
                    push(n1+n2);
                    break;
                case '-':
                    push(n1-n2);
                    break;
                case '*':
                    push(n1*n2);
                    break;
            }
        }
    }
    printf("%d\n",stack[top]);
    return 0;
}

