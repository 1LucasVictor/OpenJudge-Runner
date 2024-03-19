#include<stdio.h>
#include<string.h>


int main(void)
{
	int n;
	scanf("%d", &n);
	long a[200000];
	for (int i = 0; i < n; i++) {
		scanf("%ld",&a[i]);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (a[i] == a[j] && i != j) {
				printf("NO");
				return 0;
			}
		}
	}
	printf("YES");
	return 0;
}