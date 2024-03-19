#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(void) {
	int num;
	scanf("%d", &num);
	int i;
	int sum = 0;
	for (i = 0; i < num; i++) {
		//3???????¶???????????????????
		sum++;
		if (sum % 3 == 0 || sum % 10 == 3||(sum-30>=1&&sum-30<=9)) {
			printf(" %d", sum);
		}
	

	}
	printf("\n");
	return 0;
}