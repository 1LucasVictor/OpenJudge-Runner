#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int top, s[1000];

int pop(){
	top--;
	return s[top+1];
}

void push(int x){
	s[++top] = x;
}

int main(){
	int a,b;
	top = -1;
	char c[100];
	while(scanf("%s", c) != EOF){
		if(c[0] == '+'){
			a = pop();
			b = pop();
			push(b+a);
		} else if(c[0] == '-'){
			a = pop();
			b = pop();
			push(b-a);
		} else if(c[0] == '*'){
			a = pop();
			b = pop();
			push(b*a);
		} else{
			push(atoi(c));
		}
	}
	printf("%d\n", pop());
	return 0;
}