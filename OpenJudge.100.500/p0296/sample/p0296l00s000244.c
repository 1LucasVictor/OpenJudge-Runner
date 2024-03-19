#include<stdio.h>
#include<string.h>
#include<stdlib.h>
	int top=0;
	int S[200];
void push(int x){
	
	top++;
	S[top]=x;
}
int pop(){
	
	top--;
	return S[top+1];
}

int main()
{
	
	int a,b,c;
	char s[200];
	while(scanf("%s",s) !=EOF){
		if(s[0]=='+')
		{
			a=pop();
			b=pop();
			b+=a;
			push(b);
		}
		else if(s[0]=='-')
		{
			a=pop();
			b=pop();
			b-=a;
			push(b);
		}
		else if(s[0]=='*')
		{
			a=pop();
			b=pop();
			b*=a;
			push(b);
		}
		else
		{	
			c=atoi(s);
			push(c);
		}
	}
	a=pop();
	printf("%d\n",a);
	return 0;
}
