#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int x;
	int i;
	int j;
	
	
	for (j = 0; j < 3; j++){
		scanf("%d %d", &a, &b);
		
		x = a + b;
		
		i = 0;
		while (x != 0){
			i++;
			x /= 10;
		}
		
		printf("%d\n", i);
	}
	
	return 0;
}