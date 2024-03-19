#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int stack[1000],top;
void push(int x)
{
	stack[++top]=x;
}
int pop()
{
	top--;
	return stack[top+1];
}
int main()
{
	int a,b,k,c=0;
	top=0;
	char s[1000];
	fgets(s,1000,stdin);k=0;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='+')
		{
			 a=pop();
			 b=pop();
			 push(a+b);
		} 
	    else if(s[i]=='-')
	    {
	    	b=pop();
	    	a=pop();
	    	push(a-b);
		}
		else if(s[i]=='*')
		{
			a=pop();
			b=pop();
			push(a*b);
		}
		else
		{
			
			if(s[i]!=' ')
			{
				c=(s[i]-'0')+c*10;
				k=1;
			}
			else if(s[i]==' '&&k)
			{
				push(c);
				k=0;
				c=0;
			}
		}
	}
	printf("%d\n",pop());
	return 0;
}
