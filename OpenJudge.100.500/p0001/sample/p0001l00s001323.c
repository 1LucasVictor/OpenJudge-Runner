#include <stdio.h>

int main(void)
{
	int a[200], b[200], sum[200], n, i=0, j;
	while(scanf("%d %d", &a[i], &b[i])!=EOF) {
		sum[i]=a[i]+b[i];
		i++;
	}
	for(j=0;j<i;j++) {
		n=1;
		while(sum[j]>=10) {
			n++;
			sum[j]=sum[j]/10;
		}
		printf("%d\n",n);
	}
	return 0;
}