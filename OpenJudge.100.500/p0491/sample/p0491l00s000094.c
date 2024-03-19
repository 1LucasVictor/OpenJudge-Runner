#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define lop(i, n) for(i=0; i<n; i++)

int main()
{
	long int n, k, l;
	
	scanf("%ld %ld", &n, &k);
	
	l=n%k;
	
	if(l>k-l)printf("%ld", k-l);
	else if(l<=k-l)printf("%ld", l);
	
	
return 0;
}