#include <stdio.h>

int main()
{
	int n, i, m=100000, r;

	scanf("%d", &n);
	for(i=0; i<n; i++ ){
		r=m*0.05;
		m=m+r;
		if( m%1000 ){
			m=(m/1000+1)*1000;
		}
	}
	printf("%d\n", m);
	return 0;
}