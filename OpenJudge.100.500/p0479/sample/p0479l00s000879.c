#include<stdio.h>
int main()
{
	int i, n, s,t, sum = 0;
	scanf("%d", &n);
	int a[n + 1], box[n + 1];
	for (i = 0; i < n-1; i++) {
		scanf("%d", &s);
		a[i] = s;
	}
	for (i = 0;  i < n; i++) {
		box[i] = 0;
		for (t = 0; t < n - 1; t++) {
			if (a[t] == (i + 1))
				box[i]++;
		}
	}
	for (i = 0; i < n; i++)
		printf("%d\n", box[i]);
	return 0;
}