#include <stdio.h>

int main(void) {
	int n;
	int i;
	int debt = 100000;
	

	scanf("%d", &n);

	for(i = 0; i < n; i++) {
		debt *= 105;
		debt /= 100;
		if(debt%1000) {
			debt /= 1000;
			debt ++;
			debt *= 1000;
		}
	}
	printf("%d\n", debt);

	return 0;
}