#include<stdio.h>
int main()
{
	int n, i, d = 100000;
	scanf("%d", &n);
	for (i = 0; i < n; i ++) {
		d += d/20;
		d = (d+999)/1000*1000;
	}
	printf("%d\n", d);
	return 0;
}