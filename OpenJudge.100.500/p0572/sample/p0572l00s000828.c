#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define lli long long int
#define MAX(a,b) ((a)>(b)?(a):(b))
#define MIN(a,b) ((a)<(b)?(a):(b))
int main (void)
{
	lli l, r;
	scanf("%lld %lld",&l,&r);
	if (l%2019 == 0 || r%2019 == 0)
	{
		printf("0\n");
		return(0);
	}
	if (r-l > 2018)
	{
		printf("0\n");
		return(0);
	}
	lli min_i, min_j;
	min_i = MIN(l%2019,r%2019);
	min_j = MAX(l%2019,r%2019);
	lli index = l;
	while (index <= r)
	{
		if (index%2019 < min_i)
		{
			min_j = min_i;
			min_i = index&2019;
		}
		else if (min_i != index%2019  && index%2019 < min_j)
		{
			min_j = index%2019;
		}
		index++;
	}
	printf("%lld\n",(min_i*min_j)%2019);
	return(0);
}
