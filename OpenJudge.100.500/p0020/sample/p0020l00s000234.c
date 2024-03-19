#include <stdio.h>

/* prototype declaration */
int arePallarel(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4);

int main(int argc, const char *argv[])
{
	int i, cnt = getchar() - '0';
	double x1, y1, x2, y2, x3, y3, x4, y4;

	for(i=0; i<cnt; i++){	
		scanf("%lf%lf%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4); 
		if(arePallarel(x1, y1, x2, y2, x3, y3, x4, y4)) printf("YES\n");
		else printf("NO\n");
	}	
	return 0;
}

int arePallarel(double x1, double y1, double x2, double y2, double x3, double y3, double x4, double y4)
{
	double a1 = (y2 - y1)/(x2 - x1), a2 = (y4 - y3)/(x4 - x3);
	if(a1 == a2) return 1;
	return 0;
}