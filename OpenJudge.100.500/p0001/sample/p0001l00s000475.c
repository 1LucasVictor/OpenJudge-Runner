#include <stdio.h>

int main(void)
{
	int a, b;
	int len, n;
	
	while ( scanf("%d %d", &a, &b) != EOF ){
		
		a = a + b;
		len = 1;
		
		for (n = 0; a > 9; n++){
			
			a /= 10;
			len++;
		}
		
		printf("%d\n", len);
		
	}
	
	return (0);
}