#include <stdio.h>

int main(void)
{
	while(1)
	{
		int a,b;
		char num[1000];
		int i=0;
		int count=0;
		
		for(i=0;i<1000;i++)
		{
			num[i] = 'a';
		}
		
		if(scanf("%d %d",&a,&b) == EOF)
		{
			goto finish;
		}
		
		snprintf(num,1000, "%d", a+b);
		
		for(i=0;i<1000;i++)
		{
			if(num[i] == 'a')
			{
				goto result;
			}
		}
		
		result:
		
		printf("%d\n",i-1);
	}
	
	finish:
	
	return 0;
	
}
