#include <stdio.h>

int main(void)
{
	int W, H, x, y, r;
	
	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
	
	if (x + r <= W && x - r >= 0 && y + r <= H && y -r >= 0){
		puts("Yes");
	}
	else {
		puts("No");
	}
	
	return (0);
}