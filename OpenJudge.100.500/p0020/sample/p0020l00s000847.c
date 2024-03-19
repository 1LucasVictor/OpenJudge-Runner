#include<stdio.h>


int main(void){
	double x[4] = {0};
	double y[4] = {0};
	int n = 0;
	int i;
	scanf("%d", &n);
	while (n-- > 0){
		for (i = 0; i < 4; i++)
			scanf("%lf %lf", &x[i], &y[i]);
		if (((y[0] - y[1]) / (x[0] - x[1])) == ((y[2] - y[3]) / (x[2] - x[3])))
			printf("YES\n");
		else printf("NO\n");
	}
		return 0;
}