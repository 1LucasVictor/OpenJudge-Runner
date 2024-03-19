#include <stdio.h>

void Equ(int a, int b, int c, int d, int e, int f)
{
	float x, y;
	
	x = (c * e - b * f) / (a * e - b * d);
	
	y = (c - (a * x)) / b;
	
	printf("%.3f %.3f\n", x, y);
}

int main(void)
{
	int i, a[2], b[2], c[2], d[2], e[2], f[2];
	float x, y;
	for (i = 0 ; i < 2; i++){
		scanf("%d %d %d %d %d %d", &a[i], &b[i], &c[i], &d[i], &e[i], &f[i]);
	}
	
	for (i = 0; i < 2; i++){
		Equ(a[i], b[i], c[i], d[i], e[i], f[i]);
	}
	
	return (0); 
}