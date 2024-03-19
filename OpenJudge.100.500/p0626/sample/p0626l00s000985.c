#include <stdio.h>
#include <math.h>

int main(){
	int d, n;
	scanf("%d %d", &d, &n);

	int ans = n * (pow(100,d));

	printf("%d", ans);

	return 0;
}