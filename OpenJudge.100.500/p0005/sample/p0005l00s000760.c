#include<stdio.h>
char s[25];
int stack=0;
void push(char c)
{
	s[stack++]=c;
}
char pop(void)
{
	return s[--stack];
}
int main (void)
{
	int n;
	char c;
	for(;;)
	{
		c=getchar();
		if(c=='\n'||c==EOF)
	    {
	    	while(stack)
	           putchar(pop());
			if(c=='\n') putchar(c);	
	    }
	    else 
	        push(c);
		if(c==EOF) break;
		 
	}
    return 0;
}
