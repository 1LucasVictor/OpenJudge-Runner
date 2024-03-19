#include <stdio.h>

#define TRI (3)

int isRightAngle(int a[]);

int main()
{
	int i, j, n, a[TRI];
	
	scanf("%d", &n);
	
	for (i = 0; i < n; ++i) {
		for (j = 0; j < TRI; ++j) {
			scanf("%d", (a + j));
		}
		
		if (!isRightAngle(a)) {
			puts("YES");
		} else {
			puts("NO");
		}
	}
	
	return 0;
}

int isRightAngle(int a[])
{
	int i, idx = 0, ret;
	
	for (i = 1; i < TRI; ++i) {
		if (a[i] > a[idx]) idx = i;
	}
	
	ret = a[idx]*a[idx];
	for (i = 1; i < TRI; ++i) {
		ret -= a[(idx + i) % TRI] * a[(idx + i) % TRI];
	}
	
	return ret;
}