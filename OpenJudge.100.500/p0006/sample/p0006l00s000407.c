#include <stdio.h>

int main(void)
{
	int n;
	int debt;

	scanf("%d", &n);
	debt = 100000;
	while (n--){
		debt *= 1.05;
		debt = ((debt + 999) / 1000) * 1000;
	}
	printf("%d\n", debt);
}