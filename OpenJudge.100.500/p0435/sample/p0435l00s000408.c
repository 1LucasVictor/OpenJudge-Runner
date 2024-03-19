#include <stdio.h>
#include <math.h>

#define pow(i) ((i) * (i))
#define rep(i,n) for(int i=0;i < (n);i++)

int main(void) {
	int n, d;
	int x[10], y[10];
	double distance = 0;
	int count = 0;
	scanf("%d %d",&n, &d);

	rep(i, n) {
		scanf("%d %d", &x[i], &y[i]);
		distance = sqrt(pow(x[i]) + pow(y[i]));
		if (distance <= d)
			count++;
	}

	printf("\n%d",count);
}