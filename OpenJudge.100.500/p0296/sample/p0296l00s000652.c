#include <stdio.h>
#include <stdlib.h>
int i,s[100],top,a,b,x;
char t[100];
void push(int x){
    top++;
    s[top]=x;
}
int pop(){
    top--;
    return s[top+1];
}
int main(void){
    for(;~scanf("%s",t);){
        switch(t[0]){
            case'+':a=pop();b=pop();push(a+b);break;
            case'-':a=pop();b=pop();push(b-a);break;
            case'*':a=pop();b=pop();push(a*b);break;
            default:push(atoi(t));
        }
    }
    printf("%d\n",s[1]);

}