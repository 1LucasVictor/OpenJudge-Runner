#include <stdio.h>
#include <math.h>

int main(){
	int d, n, ans;
	scanf("%d %d", &d, &n);

	if (n != 100) {
		 ans = n*pow(100, d);
	}
	else
	{
		 ans = 101 * pow(100, d);
	}

	printf("%d", ans);

	return 0;
}