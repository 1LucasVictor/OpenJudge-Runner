#include<stdio.h>

int main(void)
{
	int a, b, n, m;
	while(scanf( "%d %d", &a, &b) != EOF) {
		n = a + b;
		m = 0;
		do{
			m++;
			n = n / 10;
		}while( n >= 1);
		printf( "%d\n", m);
	}
	return 0;
}