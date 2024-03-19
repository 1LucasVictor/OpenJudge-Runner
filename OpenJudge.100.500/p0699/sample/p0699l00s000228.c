#include <stdio.h>

int main()
{
	int a[3];
	int f_count, s_count;
	int i, j;
	scanf("%d%d%d", &a[0], &a[1], &a[2]);
	for (i = 0, s_count=0, f_count=0; i < 3; i++) {
		if (a[i] == 5) {
			f_count++;
		}
		if (a[i] == 7) {
			s_count++;
		}
	}
	if (s_count == 1 && f_count == 2) {
		printf("YES\n");
	} else {
		printf("NO\n");
	}
	return 0;
}
