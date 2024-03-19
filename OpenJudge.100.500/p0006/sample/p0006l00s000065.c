#include <stdio.h>

int main(void)
{
	int m = 100000;
	int n;
	int i;
	
	scanf("%d", &n);
	
	for (i = 0; i < n; i++){
		m += (m * 5 / 100);
		if ((m % 1000 < 1000) && (m % 1000 > 0)){
			m -= m % 1000;
			m += 1000;
		}
	}
	
	printf("%d\n", m);
	
	return (0);
}