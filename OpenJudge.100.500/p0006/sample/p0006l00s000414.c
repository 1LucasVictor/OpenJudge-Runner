#include <stdio.h>

int main(void)
{
	int n;
	int re = 100000;
	int i;
	
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		re += 100000 * 0.05;
	//	printf("%d\n", re);
	
	}
	re = (re + 10000) / 10000 * 10000;
	printf("%d\n", re);
	return (0);
}