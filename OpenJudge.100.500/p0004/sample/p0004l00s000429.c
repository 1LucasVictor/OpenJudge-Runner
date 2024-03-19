#include <stdio.h>

int main(void)
{
	int a,b;
	int gcm,lcm;
	int max;
	int i;
	
	while(scanf("%d %d",&a,&b) != EOF)
	{
	
		if(a<b)
		{
			max = b;
		}
		else
		{
			max = a;
		}
		
		for(i = 1;i <= max;i++)
		{
			if(a%i==0 && b%i==0)
			{
				gcm = i;
			}
		}
		
		lcm = gcm * (a / gcm) * (b / gcm);
		
		printf("%d %d\n",gcm,lcm);
	
	}
	
	return 0;
}