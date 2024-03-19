#include <stdio.h>

int main(void)
{
	int x , i;
	
	while (1) {
		int ans = 0;
		scanf("%d", &x);
		
		if (x == 0) {
			break;
		}
		
		for (i=x; 0 <i; i /= 10) {
			ans += (i % 10);
		}
		printf("%d\n", ans);
	}

	return 0;
}