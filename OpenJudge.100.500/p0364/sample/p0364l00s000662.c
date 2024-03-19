#include <stdio.h>

int hani(int w,int h, int x,int y,int r) {
	int flag = 1;

	if (x < 0 || y < 0 || x > w || y > h) {
		flag = 0;
	}
	if (x + r > w) {//→
		flag = 0;
	}
	if (x - r < 0) {//←
		flag = 0;
	}
	if (y + r > h) {//↑
		flag = 0;
	}
	if (y - r < 0) {//↓
		flag = 0;
	}

	return flag;
}

int main()
{
	int w, h, x, y, r;

	scanf("%d %d %d %d %d", &w, &h, &x , &y, &r);

	if (hani(w, h, x, y, r)) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}

	
	return 0;
}
