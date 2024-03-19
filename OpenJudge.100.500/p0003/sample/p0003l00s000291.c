#include <stdio.h>

int main(void)
{
	float m1, m2, n1, n2;
	float ans_m1, ans_n1;
	float x, y;
	float a, b, c;
	float a1, b1, c1;
	
	while (scanf("%f %f %f %f %f %f", &m1, &m2, &ans_m1, &n1, &n2, &ans_n1) != EOF){
		a = (m1 * n2) - (m2 * n1);
		b = 1.0 / a;
		a1 = m1;
		m1 = n2 * b;
		m2 = -1 * m2 * b;
		n1 = -1 * n1 * b;
		n2 = a1 * b;
		
		x = (m1 * ans_m1) + (m2 * ans_n1);
		y = (n1 * ans_m1) + (n2 * ans_n1);
		
		printf("%.3f %.3f\n", x, y);
	}
	
	return (0);
}