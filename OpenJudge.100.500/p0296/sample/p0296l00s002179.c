#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int head=0;
int A[200];

void push(int x){

    head=head+1;
    A[head]=x;
}

int pop(){
    head=head-1;
    return A[head+1];
}
int main(int argc, const char * argv[]) {
    int a,b;
    char c[100];
    while(scanf("%s",c)!=EOF){
        if(c[0]=='+'){
            a=pop();
            b=pop();
            push(a+b);
        }
        else if(c[0]=='-'){
            a=pop();
            b=pop();
            push(b-a);
        }
        else if(c[0]=='*'){
            a=pop();
            b=pop();
            push(a*b);
            
        }
        else{
            push(atoi(c));
        }
    }
    printf("%d\n",pop());

    return 0;
}