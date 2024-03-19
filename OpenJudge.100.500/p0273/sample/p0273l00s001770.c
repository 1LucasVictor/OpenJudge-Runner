#include <stdio.h>

int fibonatch(int a);

int k;
int z[44];


int main(void)
{
	z[0] = 1;
	z[1] = 1;
	
//	printf("%d", fibonatch(2));
	
	scanf("%d", &k);
	
	printf("%d\n", fibonatch(k));
	
	return (0);
}

int fibonatch(int a) {
	if (a == 0 || a == 1) {
		return (1);
	}
		
	fibonatch(a - 1);
	
	z[a] = z[a - 1] + z[a - 2];
	
	
	return (z[a]);
}


