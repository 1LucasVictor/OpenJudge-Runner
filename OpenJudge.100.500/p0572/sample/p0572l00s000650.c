#include<stdio.h>
#include<limits.h>
int main(void)
{
	long long l,r,min=LONG_MAX,i,j;
	scanf("%lld %lld", &l, &r);
	for(i=l; i<r; i++)
	{
		for(j=i+1; j<=r; j++)
		{
			if(min>i*j%2019)
			min=i*j%2019;
		}
		if(min==0)
		break;
	}
	printf("%d\n", min);
	
	return 0;
}