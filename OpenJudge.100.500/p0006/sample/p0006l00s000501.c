#include <stdio.h>

int main()
{
	int n, m, i;

	scanf("%d", &n);
	if( n%2!=0 ){
		m=n*5000;
		m=m+5000;
	}else if( n%2==0 ){
		m=n*5000;
	}
	i=100000+m;
	printf("%d\n", i);
	return 0;
}