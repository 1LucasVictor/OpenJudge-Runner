#include <stdio.h>

int main(void)
{
	double mo,r;
	int i, n, k;
	
	r = 1.05;
	mo = 100000;
	
	scanf("%d", &n);
	
	for(i = 0; i < n; i++){
		mo *= r;
		k = mo;
		
		if (k % 1000 != 0){
			k += 1000;
			k -= k % 1000;
		}
		mo = k;
		
	}
	
	printf("%d\n", k);
	
	return (0);
}