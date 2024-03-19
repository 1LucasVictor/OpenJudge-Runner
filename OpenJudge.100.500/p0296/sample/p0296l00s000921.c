#include<stdio.h>
#include<stdlib.h>
int pop();
void push(int x);
int top=0;
int S[100];
int main(void){
    char a[101];
    int x,y;

    while(scanf("%s",a)!=EOF){
        if(a[0]=='+'){
            x=pop();
            y=pop();
            push(y+x);
        }else if(a[0]=='-'){
            x=pop();
            y=pop();
            push(y-x);
        }else if(a[0]=='*'){
            x=pop();
            y=pop();
            push(y*x);
        }else{
            push(atoi(a));
        }
    }
    printf("%d\n",pop());
    return 0;
}

int pop(){
    top--;
    return S[top+1];
}

void push(int x){
    top++;
    S[top]=x;
}
