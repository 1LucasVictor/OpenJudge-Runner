#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int c;
	int d;
	int e;
	
	scanf("%d %d %d", &a, &b, &c);
	
	e = 0;
	for (d = a; d <= b; d++){
		if (c % d == 0){
			e++;
		}
	}
	printf("%d\n", e);
	
	return (0);
}