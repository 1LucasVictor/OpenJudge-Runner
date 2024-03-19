#include <stdio.h>

void f(int x, int y, int z)
{
	 x = x * x;
	 y = y * y;
	 z = z * z;
	 if (x + y == z || y + z == x || z + x == y) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
}

int main(void)
{
	int i;
	scanf("%d", &i);
	int j;
	for (j = 0; j < i; j++) {
		int x, y, z;
		scanf("%d %d %d", &x, &y, &z);
		f(x, y, z);
	}
	return 0;
}