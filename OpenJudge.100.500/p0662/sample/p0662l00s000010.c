#include <stdio.h>

int main()
{
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);

	if(a<=c)
		printf("%d\n",	b<=c ? 0
						:b<d ? b-c
							 : d-c);
	else
			printf("%d\n",	b<=a ? 0
							:b<d ? b-a
							: d-a);

	return 0;
}