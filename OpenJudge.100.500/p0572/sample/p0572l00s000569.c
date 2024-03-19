#include<stdio.h>
int main(void)
{
	int a,b;
	scanf("%d %d",&a,&b);
	long i,j;
	long long min = 1000000;
	if((a/2019)!= (b/2019))
		min = 0;
	else{
		for(i = a;i<b;i++)
		{
			for(j = a+1;j<=b;j++)
			{
				long long c = ((i*j)%2019);
				if(min > c)
					min = c;
			}
		}
	}
	printf("%ld",min);
	return 0;
}