#include <stdio.h>
int main()
{
	int L,R;
	int min;
	scanf("%d %d",&L,&R);
	min=(L*(L+1)) % 2019;
	for(long i=L; i<=R;i++ )
	{
		for(long j=i+1; j<=R;j++ )
		{
			if(((i*j) % 2019)<min) min=(i*j) % 2019;
			
		}
	}
	printf("%d",min);
	return 0;
}