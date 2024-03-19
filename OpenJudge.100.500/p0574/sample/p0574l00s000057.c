#include<stdio.h>
int main(void)
{
	int n, tmp,x;
	scanf("%d", &n);
	x = n % 10;
	tmp = x;
	n /= 10;
	while (n > 0) {
		x = n % 10;
		n /= 10;
		if (x == tmp) {
			printf("Bad");
			return 0;
		}
		tmp = x;
		
	}
	printf("Good");
	return 0;
}