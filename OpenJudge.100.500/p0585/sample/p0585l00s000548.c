#include <stdio.h>

int main(void)
{
	int a,b,T,sum;
	
	scanf("%d%d%d",&a,&b,&T);
	
	sum=(int)((T+0.5)/a)*b;
	
	printf("%d\n",sum);
	
	return 0;
	
}