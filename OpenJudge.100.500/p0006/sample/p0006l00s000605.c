#include <stdio.h>

int main(void)
{
	int i;
	int n;
	int m;
	scanf("%d", &n);
	m = 100000;
	for (i = 0; i < n; i++){
		m *= 1.05;
	    m = (m + 999)/1000 * 1000;
	}
	printf("%d\n", m);
	return (0);
}