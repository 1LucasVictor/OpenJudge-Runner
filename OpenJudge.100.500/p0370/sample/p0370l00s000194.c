#include<stdio.h>
int main()
{

	int a,b,c[20],i,j;
	char op;
	i=1;
	while(1)
	{
		scanf("%d %c %d",&a,&op,&b);
		
		if(op=='+')
		{
			c[i]=a+b;
		}
		else if(op=='-')
		{
			c[i]=a-b;
		
		}
		else if(op=='*')
		{
			c[i]=a*b;
		
		}
		else if(op=='/')
		{
			c[i]=a/b;
		}
		else
		{
			break;
		}
		i++;
	}

	for(j=1;j<i;j++)
	{
		printf("%d\n",c[j]);
	}
	
	return 0;	
}