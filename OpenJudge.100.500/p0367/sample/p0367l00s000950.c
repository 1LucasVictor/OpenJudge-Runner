#include <stdio.h>

int main(void)
{
	int a, b, c, re;
	
	scanf("%d %d %d", &a, &b, &c);
	re = 0;
	
	while (a <= b){
		if (c % a == 0){
			re++;
		}
		a++;
	}
	printf("%d\n", re);
	return (0);
}