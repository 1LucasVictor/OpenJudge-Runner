#include <stdio.h>

int main() {
	int width = 0, height = 0;
	int x = 0, y = 0, r = 0;
	
	scanf("%d %d %d %d %d", &width, &height, &x, &y, &r);
	
	if (x + r <= width) {
		if (x - r >=0) {
			if (y + r <= height) {
				if (y - r >= 0) {
					printf("Yes\n");
					
					return 0;
				}
			}
		}
	}
	
	printf("No\n");
	
	return 0;
}