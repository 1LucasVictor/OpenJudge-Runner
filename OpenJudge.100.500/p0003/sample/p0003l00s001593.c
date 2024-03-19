#include<stdio.h>
#define DATA 100

int main(){
	int a[DATA], b[DATA], c[DATA], d[DATA], e[DATA], f[DATA];
	double x[DATA], y[DATA];
	int i = 0, j, k, l;
	int tmpb, tmpc, tmpe, tmpf, tmp1, tmp2;

	while (scanf("%d %d %d %d %d %d", &a[i], &b[i], &c[i], &d[i], &e[i], &f[i]) != EOF)
		i++;

	for (j = 0; j < i; j++){
		k = 1;
		l = 1;

		if (a[j] < 0){
			a[j] *= -1;
			b[j] *= -1;
			c[j] *= -1;
		}
		if (d[j] < 0){
			d[j] *= -1;
			e[j] *= -1;
			f[j] *= -1;
		}

		while (a[j] * k != d[j] * l){
			if (a[j] * k < d[j] * l)
				k++;
			else
				l++;
		}

		tmpb = b[j] * k;
		tmpe = e[j] * l;
		tmp1 = tmpb - tmpe;
		tmpc = c[j] * k;
		tmpf = f[j] * l;
		tmp2 = tmpc - tmpf;
		y[j] = tmp2 / tmp1;

		x[j] = (double)c[j]/a[j] - b[j]*y[j]/a[j];

		printf("%.3f %.3f\n", x[j], y[j]);
	}
	return 0;
}