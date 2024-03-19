#include <stdio.h>

int main (void){
	int a, b, c, d, e, f;
	double ans[2];
	while(scanf("%d%d%d%d%d%d", &a, &b, &c, &d, &e, &f)!=EOF){
		ans[0]=(double)(b*f-c*e)/(d*b-a*e);
		ans[1]=(double)(c*d-a*f)/(b*d-a*e);
		printf("%.3lf %.3lf\n", ans[0], ans[1]);
	}
	return 0;
}