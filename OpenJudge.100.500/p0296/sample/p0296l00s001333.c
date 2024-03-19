#include <stdio.h>
#include <stdlib.h>
#define MAX 101

int s[MAX];
int top;

int isEmpty(){
	if(top==0) return 1;
	return 0;
}

int isFull(){
	if(top >= MAX - 1) return 1;
	return 0;
}

void push(int x){
	if(isFull()){
		fprintf(stderr,"Stack is full.\n");
		exit(1);
	}else{
		top++;
		s[top]=x;
	}
}

int pop(){
	if(isEmpty()){
		fprintf(stderr,"Stack is empty.\n");
		exit(1);
	}
	top--;
	return s[top+1];
}



int main(void){
	int x,a,b;
	char c[8];
	top=0;
	while(scanf("%s",c)>0){
		if(c[0]=='+'&&c[1]=='\0'){
			b=pop();
			a=pop();
			push(a+b);
		}
		else if(c[0]=='-'&&c[1]=='\0'){
			b=pop();
			a=pop();
			push(a-b);
		}
		else if(c[0]=='*'&&c[1]=='\0'){
			b=pop();
			a=pop();
			push(a*b);
		}else{
			push(atoi(c));
		}
	}
	x=pop();
	if(isEmpty()) printf("%d\n",x);
	else fprintf(stderr,"Stack isn't empty. x=%d\n",x);
	return 0;
}