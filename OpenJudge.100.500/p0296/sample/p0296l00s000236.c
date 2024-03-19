#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top, stack[1000];

void push(int x)
{
	stack[++top] = x;
}

int pop()
{
	top--;
	return stack[top+1];
}

int main(int argc, char const *argv[])
{
	int a, b;
	top = 0;
	char s[10];
	while(scanf("%s",s)!=EOF) {
	    if(s[0]=='+')
	    {
	    	a = pop();
	    	b = pop();
	    	push(a+b);
	    }else if(s[0]=='-')
	    {
	    	a = pop();
	    	b = pop();
	    	push(a-b);
	    }else if(s[0]=='*')
	    {
	    	a = pop();
	    	b = pop();
	    	push(a*b);
	    }else
	    {
	    	push(atoi(s));
	    }
	}
	printf("%d\n", pop());
	return 0;
}