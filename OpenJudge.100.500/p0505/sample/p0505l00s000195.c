#include <stdio.h>

int main(void) {
	int h, n, a;
	scanf("%d%d", &h, &n);
	while(n > 0) {
		scanf("%d", &a);
		h -= a;
		if(h <= 0) {
			printf("Yes\n");
			return 0;
		}
		n--;
	}
	printf("No\n");
	return 0;
}