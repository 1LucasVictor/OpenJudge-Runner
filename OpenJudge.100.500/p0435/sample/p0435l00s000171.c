#include<stdio.h>
#include<math.h>

int main(void)
{
	int N, D;
	double X, Y;
	int i, a=0;

	scanf("%d %d", &N, &D);
	for (i = 0;i < N;i++) {
		scanf("%lf %lf", &X, &Y);
		if (D >= sqrt(X * X + Y * Y)) {
			a++;
		}
	}

	printf("%d", a);
	
}