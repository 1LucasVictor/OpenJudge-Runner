#include <stdio.h>

int main(){
	double x[5], y[5];
	int i, j, n;
	scanf("%d", &n);
	for (i = 0;i < n;i++){
		for (j = 0;j < 4;j++) scanf("%lf %lf", &x[j], &y[j]);
		if (x[1] - x[0] == x[3] - x[2] && y[1] - y[0] == x[3] - x[2]) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}