#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int top,stack[200];
void push(int x){
	top++;
	stack[top]=x;
}
int pop(){
	top--;
	return stack[top+1];
}
int main(){
	int a,b,top=0;
	char s[200];
	while(scanf("%s",s)!=EOF){
		if(s[0]=='+'){
			a=pop();
			b=pop();
			push(a+b);
		}
		else if(s[0]=='-'){
			a=pop();
			b=pop();
			push(b-a);
		}
		else if(s[0]=='*'){
			a=pop();
			b=pop();
			push(a*b);
		}
		else{
			push(atoi(s));
		}
	}
	printf("%d\n",stack[1]);
	return 0;
}




















