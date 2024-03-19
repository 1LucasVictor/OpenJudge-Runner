#include <stdio.h>

int main(void)
{
	int n, i, debt, inter, result;
	scanf("%d", &n);
	
	debt = 100000;
	for (i = 0; i < n; i++){
		
		inter = debt * 0.05;
		
		debt += inter;
		
		if (debt % 1000 != 0){
			debt /= 1000;
			debt++;
			debt *= 1000;
		}
	}
		printf("%d\n", debt);
	return (0);
}