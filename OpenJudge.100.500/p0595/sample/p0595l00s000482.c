#include <stdio.h>

int main(void)
{
	int a, b, k;
	int l;
	int lx[100];
	
	int i, j;
	
	scanf("%d%d%d", &a, &b, &k);
	
	if (a <= b) {
		l = a;
	}
	else {
		l = b;
	}
	
	for (i = 1, j = 1; i <= l; i++){
	
		if (a % i == 0 && b % i == 0){
			lx[j] = i;
			j ++;
		}
	}
	
	printf("%d", lx[k]);
	
	
	return (0); 
}