#include<stdio.h>
int top,S[1000];
 
void push(int x){
    S[++top] = x;
}
 
int pop(){
    top --;
     
    return S[top+1];
}
 
void AandBpop(int *a,int *b){
    *b = pop();
    *a = pop();
}
 
int main(){
    int a,b;
    char s[10];
    top = 0;
     
    while( scanf("%s",s) != EOF){
        if(s[0] == '+'){
            AandBpop(&a,&b);
            push(a+b);
        }else if(s[0] == '-'){
            AandBpop(&a,&b);
            push(a-b);
        }else if(s[0] == '*'){
            AandBpop(&a,&b);
            push(a*b);
        }else{
            push(atoi(s));
        }
    }
     
    printf("%d\n",S[top]);
     
    return 0;
}

