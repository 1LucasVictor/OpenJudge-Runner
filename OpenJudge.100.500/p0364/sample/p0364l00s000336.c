#include<stdio.h>

int main(void)
{
	int W, H;
	int x, y, r;

	scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
	if (x + r > W || x - r < 0 || y + r > H || y - r < 0){
		printf("No");
	}else{
		printf("Yes");
	}
	putchar('\n');

	return 0;
}