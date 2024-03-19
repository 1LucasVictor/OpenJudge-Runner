#include<stdio.h>
#include<ctype.h>
int main()
{
	int n;
	double x1, y1, x2, y2, x3, y3, x4, y4;
	scanf("%d", &n);
	while (n--) {
		scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
		puts((y1-y2)*(x3-x4)==(y3-y4)*(x1-x2) ? "YES" : "NO");
	}
	return 0;
}