#include <stdio.h>
int main(void)
{
	int d, n;
	int a = 1;
	
	scanf("%d", &d);
	scanf("%d", &n);
	
	while (d > 0){
		a *= 100;
		d--;
	}
	
	printf("%d", a * n);
	
	return 0;
}