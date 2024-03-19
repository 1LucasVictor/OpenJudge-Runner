#include<stdio.h>
#define SIZE 100
int stack[SIZE];
int n=0;

void push(int x){
    stack[n]=x;
    n++;
}
int pop(){
    n--;
    return stack[n];
}

int main(void){
    char c[1000000];
    int x,a,b;
    
    while(scanf("%c",c)!=EOF){
      if(isdigit(c[0])){
	x=atoi(c);
	push(x);
      }else if(c[0]=='+'){
	push(pop()+pop());
      }else if(c[0]=='-'){
	b=pop();
	a=pop();
	push(a-b);
      }else if(c[0]=='*'){
	push(pop()*pop());
      }
    }
    printf("%d\n",pop());
    return 0;
}
