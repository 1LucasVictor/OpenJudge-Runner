#include <stdio.h>
#include <math.h>

#define pow(i) ((i) * (i))
#define rep(i,n) for(int i = 0;i < (n);i++)

int main(void) {
	int n, d;
	int count = 0;
	int x[100], y[100];

	scanf("%d %d",&n, &d);

	rep(i,n)
		scanf("%d %d", &x[i], &y[i]);

	rep(i, n) {
		if (sqrt(pow((double)x[i]) + pow((double)y[i])) <= d)
			count++;
	}

	printf("\n%d",count);
}