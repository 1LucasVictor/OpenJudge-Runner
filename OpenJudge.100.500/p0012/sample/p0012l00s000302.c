#include<stdio.h>

int main(void)
{
	int i=0, temp;
	int t[101];
	
	while(scanf("%d",&temp)!=EOF)
	{
		if(temp!=0)
		{
			t[i]=temp;
			i++;
		}
		else
		{
			printf("%d\n",t[i-1]);
			i--;
			if(i==0)
				break;
		}
	}
	return 0;
}