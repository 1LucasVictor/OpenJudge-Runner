#include <stdio.h>

int main(void)
{
	int n;
	scanf("%d", &n);
	
	int r[n][3];
	int i;
	for (i=0;i<n;i++) {
		scanf("%d %d %d", &r[i][0], &r[i][1], &r[i][2]);
	}
	int a, b, c;
	for (i=0;i<n;i++) {
		if (r[i][0] > r[i][1]) {
			if (r[i][0] > r[i][2]) {
				a = r[i][0];
				b = r[i][1];
				c = r[i][2];
			} else {
				a = r[i][2];
				b = r[i][0];
				c = r[i][1];
			}
		} else {
			if (r[i][1] > r[i][2]) {
				a = r[i][1];
				b = r[i][0];
				c = r[i][2];
			} else {
				a = r[i][2];
				b = r[i][0];
				c = r[i][1];
			}
		}
		if ( (long)(a * a) == (long)(b * b + c * c) ) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
	}
	return 0;
}