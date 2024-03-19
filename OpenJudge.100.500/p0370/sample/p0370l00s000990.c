#include <stdio.h>

int main(void)
{
	int a[20000],b[20000];
	char op[20000];
	
	int i=0;
	
	while(1)
	{
		scanf("%d %c %d",&a[i],&op[i],&b[i]);
		
		if(op[i] == '?')
		{
			goto next;
		}
		
		i++;
	}
	
	next:
	
	for(i=0;;i++)
	{
		switch(op[i])
		{
			case '+':
			{
				printf("%d\n",a[i]+b[i]);
			}
			break;
			
			case '-':
			{
				printf("%d\n",a[i]-b[i]);
			}
			break;
			
			case '*':
			{
				printf("%d\n",a[i]*b[i]);
			}
			break;
			
			case '/':
			{
				printf("%d\n",a[i]/b[i]);
			}
			break;
			
			case '?':
			{
				goto finish;
			}
			break;
		}
	}
	
	finish:
	
	return 0;
}
