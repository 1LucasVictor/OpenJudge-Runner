#include	<stdio.h>

int main(void)
{
	int indat1, indat2;
	int sum;
	int cnt;

	while (scanf("%d %d", &indat1, &indat2) != EOF){
		sum = indat1 + indat2;
		cnt = 0;
		while (sum != 0){
			sum /= 10;
			cnt++;
		}
		printf("%d", cnt);
	}

	return 0;
}