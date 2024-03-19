#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void push(int);
int pop();
int top,s[1000];

int main(void){
	int a,b;
	char s[100];
	
	while(scanf("%s",s)!=EOF){
		
		if(s[0]=='+'){
			a=pop();
			b=pop();
			push(a+b);
		}
		else if(s[0]=='-'){
			b=pop();
			a=pop();
			
			push(a-b);
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
	printf("%d\n",pop());
	return 0;
}

void push(int x){
	s[++top]=x;
}
int pop(){
	top--;
	return s[top+1];
}
