#include <stdio.h>
#include <string.h>

int top,stack[200];
void push(int x){
	//printf("push %d\n",x);
	stack[++top]=x;
}

int pop(){
	int temp = stack[top];
	stack[top--]='\0';
	return temp;
}

int main(){
	top=-1;
	int a,b;
	int calc=0;
	char str[200];
	int i;
	while(scanf("%s",str)!=EOF){
		if(str[0]=='+'){
			b=pop();
			a=pop();
			push(a+b);
		}else if(str[0]=='-'){
			b=pop();
			a=pop();
			push(a-b);
		}else if(str[0]=='*'){
			b=pop();
			a=pop();
			push(a*b);
		}else{
			push(str[0]-'0');
		}
	}
	printf("%d\n",pop());
	return 0;
}