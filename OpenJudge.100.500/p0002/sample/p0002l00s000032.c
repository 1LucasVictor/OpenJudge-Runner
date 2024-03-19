#include <stdio.h>

int main(void)
{
	int i, a, b, c;
	
	scanf("%d", &i);
	
	for (;i > 0; i--) {
		scanf("%d %d %d", &a, &b, &c);
		
		a *= a;
		b *= b;
		c *= c;
		
		if (a > b && a > c) {
			if (a == b + c)
				printf("YES");
			else 
				printf("NO");
		} else if (b > a && b > c) {
			if (b == a + c)
				printf("YES");
			else
				printf("NO");
		} else {
			if (c == a + b)
				printf("YES");
			else
				printf("NO");
		}
		printf("\n");
	}
	
	return 0;
}
			
		