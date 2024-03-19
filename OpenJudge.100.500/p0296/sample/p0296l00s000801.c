#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top=0, s[1000];

void push(int x)
{
	s[++top]=x;
}

int pop()
{
	return s[top--];
}

int main()
{
	int a,b;
	char S[101];
	while( scanf("%s", S) != EOF )
	{
		if ( S[0]=='+')
		{
			/* code */
			a=pop();
			b=pop();
			push(a+b);			
		}
		else if ( S[0]=='*')
		{
			/* code */
			a=pop();
			b=pop();
			push(a*b);
		}
		else if ( S[0]=='-')
		{
			/* code */
			a=pop();
			b=pop();
			push(b-a);
		}
		else
		{
			push(atoi(S));
		}
		
	}
	//printf("%d\n", pop());
	printf("%d\n",s[1]);
}
