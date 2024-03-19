#include <stdio.h>

int main(void){
	int X;
	int tmp;
	int count500;
	int count5;
	int count = 0;

	scanf("%d", &X);
	tmp = X;
	count500 = tmp/500;
	count += count500 * 1000;
	tmp  = tmp%500;

	count5 = tmp/5;
	count += count5 * 5;

	printf("%d\n", count);

	return 0;
}
