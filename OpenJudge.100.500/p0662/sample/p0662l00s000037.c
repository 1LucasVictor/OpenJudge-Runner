#include <stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);

	
	printf("%d\n",
					a>=c ? c=a
					:b<c ? 0
					:b<d ? b-c
						 : d-c);
	return 0;
}