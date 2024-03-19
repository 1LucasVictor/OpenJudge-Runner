#include <stdio.h>

int main() {

	int d, n;
	scanf("%d %d", &d, &n);
	int ans = 1;
	if(d == 0) ans = 1;
	else if(d == 1) ans = 100;
	else ans = 10000;
	ans *= n;
	if(ans % 100 == 0) ans += 100;
	printf("%d\n", ans);


	return 0;
}
