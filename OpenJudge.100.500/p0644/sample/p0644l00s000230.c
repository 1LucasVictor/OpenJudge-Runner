#include <stdio.h>
int main() {
	int a, ans=0;
	scanf("%d", &a);
	if (a % 10 == 1)ans++;
	if ((a / 10) % 10 == 1)ans++;
	if (a / 100 == 1)ans++;
	printf("%d", ans);
	return 0;
}