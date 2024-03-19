#include <stdio.h>

int main(void){
	int a, b, c;
	int m, k;

	scanf("%d %d %d\n", &a, &b, &c);
	for(m = a, k = 0; m <= b; m++){
		if (c % m == 0){
			k++;
		}
	}
	
	printf("%d\n", k);

	return 0;
}