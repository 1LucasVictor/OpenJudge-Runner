#include<stdio.h>
#include<math.h>

int main(void) {

	int N = 0, D = 0, i = 0, score = 0, c = 0;
	float a = 0, b = 0;
	float loot = 0;
	float d = 0, e = 0;

	(void)scanf("%d", &N);
	(void)scanf("%d", &D);

	for (i = 0; i < N; i++) {

		(void)scanf("%f", &a);
		(void)scanf("%f", &b);

		//scanf("%f%f", &a, &b);

		// 2乗
		d = a * a;
		e = b * b;

		// ルート計算
		loot = pow(d + e, 0.5);

		if (loot <= D) {

			c++;

		}
	}


	printf("%d\n", c);

	return 0;
}