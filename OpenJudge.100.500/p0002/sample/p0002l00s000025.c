#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int k, a[1000], b[1000], c[1000], size;

	scanf("%d", &size);

	for (k = 0; k < size; k++)
		scanf("%d %d %d", &a[k], &b[k], &c[k]);

	for (k = 0; k < size; k++) {
		if (a[k] == 0 || b[k] == 0 || c[k] == 0) {
			printf("NO\n");
		}
		else if (a[k] >= b[k] && a[k] >= c[k]) {
			printf("%s\n", a[k] * a[k] == b[k] * b[k] + c[k] * c[k] ? "YES" : "NO");
		}
		else  if (b[k] >= a[k] && b[k] >= c[k]) {
			printf("%s\n", b[k] * b[k] == a[k] * a[k] + c[k] * c[k] ? "YES" : "NO");
		}
		else if (c[k] >= a[k] && c[k] >= b[k]) {
			printf("%s\n", c[k] * c[k] == a[k] * a[k] + b[k] * b[k] ? "YES" : "NO");
		}
		else 
			printf("NO\n");
	}

 	return 0;
}