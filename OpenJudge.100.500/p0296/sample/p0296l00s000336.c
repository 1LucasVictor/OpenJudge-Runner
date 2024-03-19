#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top,S[1000];

void push(int x)
{
	S[++top]=x;
}

int pop()
{
	top--;
	return S[top+1];
}

int main(void)
{
	int a,b;
	top=0;
	char c[100];
	
	while(scanf("%s",c)!=EOF)
	{
		if(c[0]=='+')
		{
			a=pop();
			b=pop();
			push(a+b);
		}
		else if(c[0]=='-')
		{
			b=pop();
			a=pop();
			push(a-b);
		}
		else if(c[0]=='*')
		{
			a=pop();
			b=pop();
			push(a*b);
		}
		else 
		{
			push(atoi(c));
		}
	}
	printf("%d\n",pop());
	
	return 0;
}
