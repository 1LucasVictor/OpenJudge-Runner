#include<stdio.h>
int main(void)
{
	int n,a[5000],sum=0, max;
	int i;

	while (1) {
		scanf("%d",&n);
		if (n == 0)break;

		for (i = 0; i < n; i++)
			scanf("%d",&a[i]);
		sum = 0;
		max = a[0];
		for (i = 0; i < n; i++) {
			sum += a[i];
			if (max < sum)
				max = sum;
			if (sum < 0)
				sum = 0;
		}
		printf("%d\n",max);
	}
	return 0;
}