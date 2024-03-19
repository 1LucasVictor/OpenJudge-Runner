#include <stdio.h>

int main(void)
{
	int a, b, c, i, re;
	
	scanf("%d %d %d", &a, &b, &c);
	re = 0;
	
	for (i = a; i < b; i++){
		if (c % i == 0){
			re++;
		}
	}
	printf("%d\n", re);
	return (0);
}