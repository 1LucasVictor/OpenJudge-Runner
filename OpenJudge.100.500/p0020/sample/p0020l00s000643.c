#include <stdio.h>

int main(void){
	int n;
	double x[4], y[4];
	double a1, a2;
	int i = 0;
	
	scanf("%d", &n);
	
	while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf", 
				&x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &x[3], &y[3]) != EOF){
		
		a1 = (y[0] - y[1]) / (x[0] - x[1]);
		a2 = (y[2] - y[3]) / (x[2] - x[3]);
		printf("%s\n", a1 == a2 ? "YES" : "NO");
		i++;
		if(i >= n)	break;
	}
	
	return 0;
}