#include <stdio.h>
#include <string.h>

int main()
{
	long long int m,n;
	int i;
	while(scanf("%lld %lld",&m,&n) != EOF)
	{
		m += n;
		i = 0;
		while(m)
		{
			i++;
			m /= 10;
		}
		printf("%d\n",i);
	}
}