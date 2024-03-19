#include <stdio.h>

int main(void) {
	int a,b, c, i, cou = 0;
	scanf("%d%d%d", &a, &b, &c);
	for(i = a; b > i; i++){
		if(c%i == 0) cou++;
	}
	printf("%d\n", cou);
	return 0;
}