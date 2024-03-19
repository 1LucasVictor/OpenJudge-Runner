#include <stdio.h>

int main(void)
{
	int a, b, c;
	int yaku = 0, i;
	
	scanf("%d %d %d", &a, &b, &c);
	
	for (i = a; i <= b; i++){
		if (c % i == 0){
			yaku++;
		}
	}
	
	printf("%d\n", yaku);
	
	return (0);
}