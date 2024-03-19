#include <stdio.h>

int main(void)
{
	int n;
	double x[4], y[4];
	double ab, cd;
	int i, j;
	
	scanf("%d", &n);
	
	while (n--){
		for (i = 0; i < 4; i++){
			scanf("%lf %lf", &x[i], &y[i]);
		}
		
		ab = (y[0] - y[1]) / (x[0] - x[1]);
		cd = (y[2] - y[3]) / (x[2] - x[3]);
		
		if (ab == cd){
			printf("YES\n");
		}
		else {
			printf("NO\n");
		}
	}
	
	return (0);
}