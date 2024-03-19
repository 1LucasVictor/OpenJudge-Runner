#include<stdio.h>

int width, height;
int circle_x, circle_y, circle_r;

int main() {
	scanf("%d %d %d %d %d", &width, &height, &circle_x, &circle_y, &circle_r);
	
	if (width - circle_r >= circle_x && circle_r <= circle_x &&
		height - circle_r >= circle_y && circle_r <= circle_y)
		printf("Yes\n");
	else
		printf("No\n");
	return 0;
}
